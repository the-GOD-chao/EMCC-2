/*
 * dev_control.cpp
 *
 *  Created on: 2020年11月23日
 *      Author: VULCAN
 */


#include "dev_control.hpp"


/*******************全局变量**************
 * 说明：分为三部分：标志位，调参位，非调参位
 * ****/

/**标志位**
 * (一般设为bool类型，若要输出显示可改为整型）
 * ***/

bool delay_sw=0;//延迟启动位

/**调参部分**/

//pid控制参数
float Kp_M=0,Ki_M=0;//电机
float Kp_s_wd=0.0165,Kd_s=0.08;//弯道舵机
float Kp_s_zd=0.0165;//直道舵机
//速度控制
float spd_M=35,spd_Ml=30;//高速和低速设置
float spdfix_R=1,spdfix_L=1;//差速系数
//其他
int  turn_TH=5;//转弯临界点
int dx=5;//线性部分长度
float loss_pwm=0.6;//丢线情况下的打角

/**非调参部分**
 * （一般作中间变量或初始设定常量，测试时菜单显示调参或仅只读显示）
 * *******/

float spd_R_Now,spd_L_Now;//当前速度
float steer_mid=7.65;//舵机中点

float wd_flag=0;//弯道直道状态，0直道，1弯道，0.5中间状态
float Kp_s;//当前的pd参数


float Motor_error_L=0,Motor_error_R=0;
float Motor_error_L1=0,Motor_error_R1=0;//速度误差
float Motor_L_goal=spd_M,Motor_R_goal=spd_M;//目标占空比输出（直道时一般为设定值，在差速情况下会有变化）
float Motor_R=spd_M,Motor_L=spd_M;//电机占空比输出（最终值）

float errorS=0,errorS_1=0;//电磁误差值
float steer_pwm=steer_mid;//舵机输出占空比（最终值）
float pwm_last[8]={0};//记录输出状态


/********************设置中断****************/

void Int_set(void)
{
    pitMgr_t::insert(6,0,my_Motor,pitMgr_t::enable);
    pitMgr_t::insert(20,2,my_steer,pitMgr_t::enable);
}


/*************中断服务函数****************/


void my_Motor(void *a)
{
   /*速度获取*/
    spd_R_Now=-SCFTM_GetSpeed(FTM2)*0.35;
    SCFTM_ClearSpeed(FTM2);
    spd_L_Now=SCFTM_GetSpeed(FTM1)*0.35;
    SCFTM_ClearSpeed(FTM1);

    MotorCTRL();
    if(delay_sw==0||em_sw==0)
    {
        Motor_R=0;
        Motor_L=0;
    }

    /*******反转保护并最终输出电机占空比**
     * 最终输出部分，之前只允许更改Motor_R/L大小，不准直接输出占空比
     */
        if(Motor_R>0)
        {
            SCFTM_PWM_ChangeHiRes(FTM0,kFTM_Chnl_0,20000,Motor_R);
            SCFTM_PWM_ChangeHiRes(FTM0,kFTM_Chnl_1,20000,0);
        }
        else
        {
            SCFTM_PWM_ChangeHiRes(FTM0,kFTM_Chnl_0,20000,0);
            SCFTM_PWM_ChangeHiRes(FTM0,kFTM_Chnl_1,20000,-Motor_R);
        }
        if(Motor_L>0)
        {
            SCFTM_PWM_ChangeHiRes(FTM0,kFTM_Chnl_2,20000,Motor_L);
            SCFTM_PWM_ChangeHiRes(FTM0,kFTM_Chnl_3,20000,0);
        }
        else
        {
            SCFTM_PWM_ChangeHiRes(FTM0,kFTM_Chnl_2,20000,0);
            SCFTM_PWM_ChangeHiRes(FTM0,kFTM_Chnl_3,20000,-Motor_L);
        }

}
void my_steer(void *a)
{
    steerCTRL();
    SCFTM_PWM_ChangeHiRes(FTM3,kFTM_Chnl_7,50,steer_pwm);
}

/********差值计算函数*************
 * 说明：计算两个变量的差值，输出正数
 *       b=0时为取绝对值函数
 *******************/

float my_delta(float a,float b)
{
    float x;
    if(a>=b)x=a-b;
    else x=b-a;
    return x;
}



/***********控制舵机输出****************
 * 说明
 * 获取图像差值后进行pd控制
 * 使用分段参数，图像误差大于turn_TH+5时，进入弯道状态，反之直道状态,中间段为过渡部分
 *
 * ********/


void steerCTRL(void)
{

    /**电磁处理*/
   LV_Sample();//采集
   LV_Get_Val();//滤波
   normalization();//归一化
   EM_loss_();//丢线判定







   if(!EM_loss)//正常情况，误差计算，输出pwm
   {


   //获取误差
   errorS=get_EM_error();



   /***分段参数**/
   if(my_delta(errorS,0)>(float)(turn_TH+dx))
   {
       Kp_s=Kp_s_wd;
       wd_flag=1;
   }
   else if(my_delta(errorS,0)<(float)(turn_TH))
   {
       Kp_s=Kp_s_zd;
       wd_flag=0;
   }
   else
   {

       Kp_s=trans_error(errorS,Kp_s_wd,Kp_s_zd,dx);
       wd_flag=0.5;

   }
   steer_pwm=Kp_s*errorS+Kd_s*(errorS-errorS_1)+steer_mid;
   errorS_1=errorS;



   /**限幅*/
    if(steer_pwm<steer_mid-0.85)
        steer_pwm=steer_mid-0.85;
    else if(steer_pwm>steer_mid+0.85)
        steer_pwm=steer_mid+0.85;

    /****舵机输出记录，用于丢线情况***/
        pwm_last[0]=steer_pwm;
        for (uint8_t i=8;i>0;i--)
        {
            pwm_last[i]=pwm_last[i-1];
        }
    }


   else if (EM_loss)//丢线情况下，直接给一个打角
   {
       float x=0;
       //根据之前舵机输出情况计算丢线时的打角方向，可改进
       x=(pwm_last[1]+pwm_last[2]+pwm_last[3]+pwm_last[4]+pwm_last[5]+pwm_last[6]+pwm_last[7]+pwm_last[8])/8-steer_mid;

       if(x>0)
       steer_pwm=steer_mid+loss_pwm;//给予固定打角
       else if(x<0)
       steer_pwm=steer_mid-loss_pwm;
   }

}
/***************电机输出********************
 * 说明：
 * turn_TH为转弯临界值，大于此变化进入弯道状态，大参数转弯且低速；小于则直道状态，小参数用于稳定且高速
 *
 * 增量式PI控制
 *
 * ***/
void MotorCTRL(void)
{



   /********差速*****
    * **弯道低速*/
    if(my_delta(errorS,0)>(float)turn_TH)
    {
        Motor_L_goal = spd_Ml*(1+spdfix_R*SpdFix(steer_pwm-steer_mid));
        Motor_R_goal = spd_Ml*(1-spdfix_L*SpdFix(steer_pwm-steer_mid));
    }

    else
    {
        /**直道高速*/
        Motor_L_goal = spd_M;
        Motor_R_goal = spd_M;
    }

      //差值获取
    Motor_error_L=Motor_L_goal-spd_L_Now;
    Motor_error_R=Motor_R_goal-spd_R_Now;
      //pid控制
    Motor_L=Motor_L_goal+Kp_M*(Motor_error_L-Motor_error_L1)+Ki_M*Motor_error_L;
    Motor_R=Motor_R_goal+Kp_M*(Motor_error_R-Motor_error_R1)+Ki_M*Motor_error_R;


    Motor_error_R1=Motor_error_R;
    Motor_error_L1=Motor_error_L;


    /**限幅*/
    if(Motor_L>75)
        Motor_L=75;
    else if(Motor_L<-75)
            Motor_L=-75;
    if(Motor_R>75)
        Motor_R=75;
    else if(Motor_R<-75)
            Motor_R=-75;

}
/***************差速拟合计算*****************/
float SpdFix(float x)
{
    float spdfix=0;
    if(x>0)
    spdfix= -0.0523*x*x*x - 0.0123*x*x - 0.2711*x + 0.0041;
    if(x<0)
    spdfix=-0.0523*x*x*x + 0.0123*x*x - 0.2711*x - 0.0041;
    if(spdfix > 0.3 || spdfix < -0.3)
    {
        return 0;
    }
    return spdfix;
}

/****过渡部分线性计算***************/
float trans_error(float error,float high,float low,float dx)
{
    float x;

        x = low+(high-low)*(my_delta(error,0)-(float)turn_TH)/dx;
        x = low+(high-low)*(my_delta(error,0)-(float)turn_TH)/dx;

    return x;
}



/***************延时启动**********************/

void del_start(void)
{
    if(!delay_sw)
    {
        DISP_SSD1306_delay_ms(1000);
        delay_sw=true;
    }
}

void wifi(void)
{

    float acr_speed[6]={0};
    acr_speed[0]=spd_R_Now;
    acr_speed[1]=spd_L_Now;
    acr_speed[2]=Motor_R;
    acr_speed[3]=Motor_L;
    acr_speed[4]=errorS;
    acr_speed[5]=steer_pwm;
    SCHOST_VarUpload(acr_speed,6);
}

void menu_CTRL(void)
{

    menu_list_t *servo_sub;
    servo_sub = MENU_ListConstruct("servo", 6, menu_menuRoot);
    MENU_ListInsert(menu_menuRoot, MENU_ItemConstruct(menuType, servo_sub, "servo", 0, 0));

    MENU_ListInsert(servo_sub, MENU_ItemConstruct(varfType, &Kp_s_wd, "Kp_wd", 11, menuItem_data_global));
    MENU_ListInsert(servo_sub, MENU_ItemConstruct(varfType, &Kd_s, "Kd", 12, menuItem_data_global));
    MENU_ListInsert(servo_sub, MENU_ItemConstruct(varfType, &Kp_s_zd, "Kp_zd", 13, menuItem_data_global));
    MENU_ListInsert(servo_sub, MENU_ItemConstruct(variType, &turn_TH, "turn_TH", 20, menuItem_data_global));
    MENU_ListInsert(servo_sub, MENU_ItemConstruct(variType, &dx, "dx", 21, menuItem_data_global));

    menu_list_t *motor_sub;
    motor_sub = MENU_ListConstruct("motor", 7, menu_menuRoot);
    MENU_ListInsert(menu_menuRoot, MENU_ItemConstruct(menuType, motor_sub, "motor", 0, 0));

    MENU_ListInsert(motor_sub, MENU_ItemConstruct(varfType, &Kp_M, "Kp_M", 14, menuItem_data_global));
    MENU_ListInsert(motor_sub, MENU_ItemConstruct(varfType, &Ki_M, "Ki_M", 15, menuItem_data_global));
    MENU_ListInsert(motor_sub, MENU_ItemConstruct(varfType, &spd_M, "spd_M", 16, menuItem_data_global));
    MENU_ListInsert(motor_sub, MENU_ItemConstruct(varfType, &spd_Ml, "spd_Ml", 17, menuItem_data_global));
    MENU_ListInsert(motor_sub, MENU_ItemConstruct(varfType, &spdfix_R, "Kspd_R", 18, menuItem_data_global));
    MENU_ListInsert(motor_sub, MENU_ItemConstruct(varfType, &spdfix_L, "Kspd_L", 19, menuItem_data_global));

    menu_list_t *CTRL_sub;
    CTRL_sub = MENU_ListConstruct("CTRL", 20, menu_menuRoot);
    MENU_ListInsert(menu_menuRoot, MENU_ItemConstruct(menuType,  CTRL_sub, "CTRL", 0, 0));

    MENU_ListInsert(CTRL_sub, MENU_ItemConstruct(varfType, &steer_pwm, "steer_pwm", 22, menuItem_data_global));
    MENU_ListInsert(CTRL_sub, MENU_ItemConstruct(varfType, &steer_mid, "steer_mid", 21, menuItem_data_global));
    MENU_ListInsert(CTRL_sub, MENU_ItemConstruct(varfType, &loss_pwm, "loss_pwm", 23, menuItem_data_global));

    MENU_ListInsert(CTRL_sub, MENU_ItemConstruct(varfType, &spd_L_Now, "spd_L_Now", 0, menuItem_data_ROFlag | menuItem_data_NoSave | menuItem_data_NoLoad));
    MENU_ListInsert(CTRL_sub, MENU_ItemConstruct(varfType, &spd_R_Now, "spd_R_Now", 0, menuItem_data_ROFlag | menuItem_data_NoSave | menuItem_data_NoLoad));
    MENU_ListInsert(CTRL_sub, MENU_ItemConstruct(varfType, &wd_flag, "wd_flag", 0, menuItem_data_ROFlag | menuItem_data_NoSave | menuItem_data_NoLoad));
    MENU_ListInsert(CTRL_sub, MENU_ItemConstruct(varfType, &Motor_L_goal, "M_L_goal", 0, menuItem_data_ROFlag | menuItem_data_NoSave | menuItem_data_NoLoad));
    MENU_ListInsert(CTRL_sub, MENU_ItemConstruct(varfType, &Motor_R_goal, "M_R_goal", 0, menuItem_data_ROFlag | menuItem_data_NoSave | menuItem_data_NoLoad));
    MENU_ListInsert(CTRL_sub, MENU_ItemConstruct(varfType, &Motor_L, "Motor_L", 0, menuItem_data_ROFlag | menuItem_data_NoSave | menuItem_data_NoLoad));
    MENU_ListInsert(CTRL_sub, MENU_ItemConstruct(varfType, &Motor_R, "Motor_R", 0, menuItem_data_ROFlag | menuItem_data_NoSave | menuItem_data_NoLoad));
    MENU_ListInsert(CTRL_sub, MENU_ItemConstruct(varfType, &errorS, "error", 0, menuItem_data_ROFlag | menuItem_data_NoSave | menuItem_data_NoLoad));



}


















