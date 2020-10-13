/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define PORT_DFER_DFE_1_MASK 0x02u /*!<@brief Digital Filter Enable Mask for item 1. */
#define PORT_DFER_DFE_2_MASK 0x04u /*!<@brief Digital Filter Enable Mask for item 2. */

/*! @name PORTE8 (number 11), SD_DTK
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_SD_DTK_GPIO GPIOE               /*!<@brief GPIO peripheral base pointer */
#define GPIO_SD_DTK_GPIO_PIN_MASK (1U << 8U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_SD_DTK_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define GPIO_SD_DTK_PIN 8U                   /*!<@brief PORT pin number */
#define GPIO_SD_DTK_PIN_MASK (1U << 8U)      /*!<@brief PORT pin mask */
                                             /* @} */

/*! @name PORTE26 (number 47), TOF0_INT
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_TOF0_INT_GPIO GPIOE                /*!<@brief GPIO peripheral base pointer */
#define GPIO_TOF0_INT_GPIO_PIN_MASK (1U << 26U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_TOF0_INT_PORT PORTE                /*!<@brief PORT peripheral base pointer */
#define GPIO_TOF0_INT_PIN 26U                   /*!<@brief PORT pin number */
#define GPIO_TOF0_INT_PIN_MASK (1U << 26U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTE27 (number 48), TOF0_XHT
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_TOF0_XHT_GPIO GPIOE                /*!<@brief GPIO peripheral base pointer */
#define GPIO_TOF0_XHT_GPIO_PIN_MASK (1U << 27U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_TOF0_XHT_PORT PORTE                /*!<@brief PORT peripheral base pointer */
#define GPIO_TOF0_XHT_PIN 27U                   /*!<@brief PORT pin number */
#define GPIO_TOF0_XHT_PIN_MASK (1U << 27U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTE28 (number 49), TOF1_INT
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_TOF1_INT_GPIO GPIOE                /*!<@brief GPIO peripheral base pointer */
#define GPIO_TOF1_INT_GPIO_PIN_MASK (1U << 28U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_TOF1_INT_PORT PORTE                /*!<@brief PORT peripheral base pointer */
#define GPIO_TOF1_INT_PIN 28U                   /*!<@brief PORT pin number */
#define GPIO_TOF1_INT_PIN_MASK (1U << 28U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTA4 (number 54), TOF_XHT
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_TOF1_XHT_GPIO GPIOA               /*!<@brief GPIO peripheral base pointer */
#define GPIO_TOF1_XHT_GPIO_PIN_MASK (1U << 4U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_TOF1_XHT_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define GPIO_TOF1_XHT_PIN 4U                   /*!<@brief PORT pin number */
#define GPIO_TOF1_XHT_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*! @name PORTA10 (number 62), OLED_D_C
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_OLED_RST_GPIO GPIOA                /*!<@brief GPIO peripheral base pointer */
#define GPIO_OLED_RST_GPIO_PIN_MASK (1U << 10U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_OLED_RST_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define GPIO_OLED_RST_PIN 10U                   /*!<@brief PORT pin number */
#define GPIO_OLED_RST_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTA11 (number 63), OLED_RST
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_OLED_D_C_GPIO GPIOA                /*!<@brief GPIO peripheral base pointer */
#define GPIO_OLED_D_C_GPIO_PIN_MASK (1U << 11U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_OLED_D_C_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define GPIO_OLED_D_C_PIN 11U                   /*!<@brief PORT pin number */
#define GPIO_OLED_D_C_PIN_MASK (1U << 11U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTC4 (number 109), KEY_BTUP
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_KEY_BTUP_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define GPIO_KEY_BTUP_GPIO_PIN_MASK (1U << 4U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_KEY_BTUP_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define GPIO_KEY_BTUP_PIN 4U                   /*!<@brief PORT pin number */
#define GPIO_KEY_BTUP_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*! @name PORTC5 (number 110), KEY_BTDN
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_KEY_BTRT_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define GPIO_KEY_BTRT_GPIO_PIN_MASK (1U << 5U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_KEY_BTRT_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define GPIO_KEY_BTRT_PIN 5U                   /*!<@brief PORT pin number */
#define GPIO_KEY_BTRT_PIN_MASK (1U << 5U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*! @name PORTC6 (number 111), KEY_BTLF
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_KEY_BTDN_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define GPIO_KEY_BTDN_GPIO_PIN_MASK (1U << 6U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_KEY_BTDN_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define GPIO_KEY_BTDN_PIN 6U                   /*!<@brief PORT pin number */
#define GPIO_KEY_BTDN_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*! @name PORTC7 (number 112), KEY_BTLF
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_KEY_BTLF_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define GPIO_KEY_BTLF_GPIO_PIN_MASK (1U << 7U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_KEY_BTLF_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define GPIO_KEY_BTLF_PIN 7U                   /*!<@brief PORT pin number */
#define GPIO_KEY_BTLF_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*! @name PORTC8 (number 113), KEY_BTOK
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_KEY_BTOK_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define GPIO_KEY_BTOK_GPIO_PIN_MASK (1U << 8U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_KEY_BTOK_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define GPIO_KEY_BTOK_PIN 8U                   /*!<@brief PORT pin number */
#define GPIO_KEY_BTOK_PIN_MASK (1U << 8U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*! @name PORTC12 (number 117), KEY_SW00
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_KEY_SW01_GPIO GPIOC                /*!<@brief GPIO peripheral base pointer */
#define GPIO_KEY_SW01_GPIO_PIN_MASK (1U << 12U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_KEY_SW01_PORT PORTC                /*!<@brief PORT peripheral base pointer */
#define GPIO_KEY_SW01_PIN 12U                   /*!<@brief PORT pin number */
#define GPIO_KEY_SW01_PIN_MASK (1U << 12U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTC13 (number 118), KEY_SW02
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_KEY_SW02_GPIO GPIOC                /*!<@brief GPIO peripheral base pointer */
#define GPIO_KEY_SW02_GPIO_PIN_MASK (1U << 13U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_KEY_SW02_PORT PORTC                /*!<@brief PORT peripheral base pointer */
#define GPIO_KEY_SW02_PIN 13U                   /*!<@brief PORT pin number */
#define GPIO_KEY_SW02_PIN_MASK (1U << 13U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTC14 (number 119), KEY_SW03
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_KEY_SW03_GPIO GPIOC                /*!<@brief GPIO peripheral base pointer */
#define GPIO_KEY_SW03_GPIO_PIN_MASK (1U << 14U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_KEY_SW03_PORT PORTC                /*!<@brief PORT peripheral base pointer */
#define GPIO_KEY_SW03_PIN 14U                   /*!<@brief PORT pin number */
#define GPIO_KEY_SW03_PIN_MASK (1U << 14U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTC15 (number 120), KEY_SW04
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_KEY_SW04_GPIO GPIOC                /*!<@brief GPIO peripheral base pointer */
#define GPIO_KEY_SW04_GPIO_PIN_MASK (1U << 15U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_KEY_SW04_PORT PORTC                /*!<@brief PORT peripheral base pointer */
#define GPIO_KEY_SW04_PIN 15U                   /*!<@brief PORT pin number */
#define GPIO_KEY_SW04_PIN_MASK (1U << 15U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTD4 (number 131), CAM_PCLK
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_CAM_PCLK_GPIO GPIOD               /*!<@brief GPIO peripheral base pointer */
#define GPIO_CAM_PCLK_GPIO_PIN_MASK (1U << 4U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_CAM_PCLK_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define GPIO_CAM_PCLK_PIN 4U                   /*!<@brief PORT pin number */
#define GPIO_CAM_PCLK_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*! @name PORTD5 (number 132), CAM_VSNC
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_CAM_VSNC_GPIO GPIOD               /*!<@brief GPIO peripheral base pointer */
#define GPIO_CAM_VSNC_GPIO_PIN_MASK (1U << 5U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_CAM_VSNC_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define GPIO_CAM_VSNC_PIN 5U                   /*!<@brief PORT pin number */
#define GPIO_CAM_VSNC_PIN_MASK (1U << 5U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*! @name PORTD8 (number 137), CAM_D0
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_CAM_D0_GPIO GPIOD               /*!<@brief GPIO peripheral base pointer */
#define GPIO_CAM_D0_GPIO_PIN_MASK (1U << 8U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_CAM_D0_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define GPIO_CAM_D0_PIN 8U                   /*!<@brief PORT pin number */
#define GPIO_CAM_D0_PIN_MASK (1U << 8U)      /*!<@brief PORT pin mask */
                                             /* @} */

/*! @name PORTD9 (number 138), CAM_D1
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_CAM_D1_GPIO GPIOD               /*!<@brief GPIO peripheral base pointer */
#define GPIO_CAM_D1_GPIO_PIN_MASK (1U << 9U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_CAM_D1_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define GPIO_CAM_D1_PIN 9U                   /*!<@brief PORT pin number */
#define GPIO_CAM_D1_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                             /* @} */

/*! @name PORTD10 (number 139), CAM_D2
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_CAM_D2_GPIO GPIOD                /*!<@brief GPIO peripheral base pointer */
#define GPIO_CAM_D2_GPIO_PIN_MASK (1U << 10U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_CAM_D2_PORT PORTD                /*!<@brief PORT peripheral base pointer */
#define GPIO_CAM_D2_PIN 10U                   /*!<@brief PORT pin number */
#define GPIO_CAM_D2_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*! @name PORTD11 (number 140), CAM_D3
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_CAM_D3_GPIO GPIOD                /*!<@brief GPIO peripheral base pointer */
#define GPIO_CAM_D3_GPIO_PIN_MASK (1U << 11U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_CAM_D3_PORT PORTD                /*!<@brief PORT peripheral base pointer */
#define GPIO_CAM_D3_PIN 11U                   /*!<@brief PORT pin number */
#define GPIO_CAM_D3_PIN_MASK (1U << 11U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*! @name PORTD12 (number 141), CAM_d3
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_CAM_D4_GPIO GPIOD                /*!<@brief GPIO peripheral base pointer */
#define GPIO_CAM_D4_GPIO_PIN_MASK (1U << 12U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_CAM_D4_PORT PORTD                /*!<@brief PORT peripheral base pointer */
#define GPIO_CAM_D4_PIN 12U                   /*!<@brief PORT pin number */
#define GPIO_CAM_D4_PIN_MASK (1U << 12U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*! @name PORTD13 (number 142), CAM_D5
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_CAM_D5_GPIO GPIOD                /*!<@brief GPIO peripheral base pointer */
#define GPIO_CAM_D5_GPIO_PIN_MASK (1U << 13U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_CAM_D5_PORT PORTD                /*!<@brief PORT peripheral base pointer */
#define GPIO_CAM_D5_PIN 13U                   /*!<@brief PORT pin number */
#define GPIO_CAM_D5_PIN_MASK (1U << 13U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*! @name PORTD14 (number 143), CAM_D6
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_CAM_D6_GPIO GPIOD                /*!<@brief GPIO peripheral base pointer */
#define GPIO_CAM_D6_GPIO_PIN_MASK (1U << 14U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_CAM_D6_PORT PORTD                /*!<@brief PORT peripheral base pointer */
#define GPIO_CAM_D6_PIN 14U                   /*!<@brief PORT pin number */
#define GPIO_CAM_D6_PIN_MASK (1U << 14U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*! @name PORTD15 (number 144), CAM_D7
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_CAM_D7_GPIO GPIOD                /*!<@brief GPIO peripheral base pointer */
#define GPIO_CAM_D7_GPIO_PIN_MASK (1U << 15U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_CAM_D7_PORT PORTD                /*!<@brief PORT peripheral base pointer */
#define GPIO_CAM_D7_PIN 15U                   /*!<@brief PORT pin number */
#define GPIO_CAM_D7_PIN_MASK (1U << 15U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*! @name PORTD7 (number 136), RSV_D7
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_RSV_D7_GPIO GPIOD               /*!<@brief GPIO peripheral base pointer */
#define GPIO_RSV_D7_GPIO_PIN_MASK (1U << 7U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_RSV_D7_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define GPIO_RSV_D7_PIN 7U                   /*!<@brief PORT pin number */
#define GPIO_RSV_D7_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                             /* @} */

/*! @name PORTD6 (number 133), RSV_D6
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_RSV_D6_GPIO GPIOD               /*!<@brief GPIO peripheral base pointer */
#define GPIO_RSV_D6_GPIO_PIN_MASK (1U << 6U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_RSV_D6_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define GPIO_RSV_D6_PIN 6U                   /*!<@brief PORT pin number */
#define GPIO_RSV_D6_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                             /* @} */

/*! @name PORTD2 (number 129), RSV_D2
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_RSV_D2_GPIO GPIOD               /*!<@brief GPIO peripheral base pointer */
#define GPIO_RSV_D2_GPIO_PIN_MASK (1U << 2U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_RSV_D2_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define GPIO_RSV_D2_PIN 2U                   /*!<@brief PORT pin number */
#define GPIO_RSV_D2_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                             /* @} */

/*! @name PORTD1 (number 128), RSV_D1
  @{ */

/* Symbols to be used with GPIO driver */
#define GPIO_RSV_D1_GPIO GPIOD               /*!<@brief GPIO peripheral base pointer */
#define GPIO_RSV_D1_GPIO_PIN_MASK (1U << 1U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define GPIO_RSV_D1_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define GPIO_RSV_D1_PIN 1U                   /*!<@brief PORT pin number */
#define GPIO_RSV_D1_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                             /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void gpio(void);

/*! @name PORTA12 (number 64), IMU_SCL
  @{ */

/* Symbols to be used with PORT driver */
#define I2C_IMU_SCL_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define I2C_IMU_SCL_PIN 12U                   /*!<@brief PORT pin number */
#define I2C_IMU_SCL_PIN_MASK (1U << 12U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*! @name PORTA13 (number 65), IMU_SDA
  @{ */

/* Symbols to be used with PORT driver */
#define I2C_IMU_SDA_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define I2C_IMU_SDA_PIN 13U                   /*!<@brief PORT pin number */
#define I2C_IMU_SDA_PIN_MASK (1U << 13U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*! @name PORTE24 (number 45), TOF_SCL
  @{ */

/* Symbols to be used with PORT driver */
#define I2C_TOF_SCL_PORT PORTE                /*!<@brief PORT peripheral base pointer */
#define I2C_TOF_SCL_PIN 24U                   /*!<@brief PORT pin number */
#define I2C_TOF_SCL_PIN_MASK (1U << 24U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*! @name PORTE25 (number 46), TOF_SDA
  @{ */

/* Symbols to be used with PORT driver */
#define I2C_TOF_SDA_PORT PORTE                /*!<@brief PORT peripheral base pointer */
#define I2C_TOF_SDA_PIN 25U                   /*!<@brief PORT pin number */
#define I2C_TOF_SDA_PIN_MASK (1U << 25U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void i2c(void);

/*! @name PORTA14 (number 66), OLED_PCS
  @{ */

/* Symbols to be used with PORT driver */
#define SPI_OLED_PCS_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define SPI_OLED_PCS_PIN 14U                   /*!<@brief PORT pin number */
#define SPI_OLED_PCS_PIN_MASK (1U << 14U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*! @name PORTA15 (number 67), OLED_SCK
  @{ */

/* Symbols to be used with PORT driver */
#define SPI_OLED_SCK_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define SPI_OLED_SCK_PIN 15U                   /*!<@brief PORT pin number */
#define SPI_OLED_SCK_PIN_MASK (1U << 15U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*! @name PORTA16 (number 68), OLED_SOT
  @{ */

/* Symbols to be used with PORT driver */
#define SPI_OLED_SOT_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define SPI_OLED_SOT_PIN 16U                   /*!<@brief PORT pin number */
#define SPI_OLED_SOT_PIN_MASK (1U << 16U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void spi(void);

/*! @name PORTC16 (number 123), CAM_RX
  @{ */

/* Symbols to be used with PORT driver */
#define UART_CAM_RX_PORT PORTC                /*!<@brief PORT peripheral base pointer */
#define UART_CAM_RX_PIN 16U                   /*!<@brief PORT pin number */
#define UART_CAM_RX_PIN_MASK (1U << 16U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*! @name PORTC17 (number 124), CAM_TX
  @{ */

/* Symbols to be used with PORT driver */
#define UART_CAM_TX_PORT PORTC                /*!<@brief PORT peripheral base pointer */
#define UART_CAM_TX_PIN 17U                   /*!<@brief PORT pin number */
#define UART_CAM_TX_PIN_MASK (1U << 17U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void uart(void);

/*! @name PORTE6 (number 9), CLEDL_B
  @{ */

/* Symbols to be used with PORT driver */
#define FTM_CLEDL_B_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define FTM_CLEDL_B_PIN 6U                   /*!<@brief PORT pin number */
#define FTM_CLEDL_B_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                             /* @} */

/*! @name PORTE7 (number 10), CLEDL_G
  @{ */

/* Symbols to be used with PORT driver */
#define FTM_CLEDL_G_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define FTM_CLEDL_G_PIN 7U                   /*!<@brief PORT pin number */
#define FTM_CLEDL_G_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                             /* @} */

/*! @name PORTE9 (number 12), CLEDL_R
  @{ */

/* Symbols to be used with PORT driver */
#define FTM_CLEDL_R_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define FTM_CLEDL_R_PIN 9U                   /*!<@brief PORT pin number */
#define FTM_CLEDL_R_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                             /* @} */

/*! @name PORTC9 (number 114), CLEDR_B
  @{ */

/* Symbols to be used with PORT driver */
#define FTM_CLEDR_B_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define FTM_CLEDR_B_PIN 9U                   /*!<@brief PORT pin number */
#define FTM_CLEDR_B_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                             /* @} */

/*! @name PORTC10 (number 115), CLEDR_G
  @{ */

/* Symbols to be used with PORT driver */
#define FTM_CLEDR_G_PORT PORTC                /*!<@brief PORT peripheral base pointer */
#define FTM_CLEDR_G_PIN 10U                   /*!<@brief PORT pin number */
#define FTM_CLEDR_G_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*! @name PORTC11 (number 116), CLEDR_R
  @{ */

/* Symbols to be used with PORT driver */
#define FTM_CLEDR_R_PORT PORTC                /*!<@brief PORT peripheral base pointer */
#define FTM_CLEDR_R_PIN 11U                   /*!<@brief PORT pin number */
#define FTM_CLEDR_R_PIN_MASK (1U << 11U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*! @name PORTD0 (number 127), SERVO_F
  @{ */

/* Symbols to be used with PORT driver */
#define FTM_SERVO_F_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define FTM_SERVO_F_PIN 0U                   /*!<@brief PORT pin number */
#define FTM_SERVO_F_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                             /* @} */

/*! @name PORTD3 (number 130), SERVO_B
  @{ */

/* Symbols to be used with PORT driver */
#define FTM_SERVO_B_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define FTM_SERVO_B_PIN 3U                   /*!<@brief PORT pin number */
#define FTM_SERVO_B_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                             /* @} */

/*! @name PORTC1 (number 104), MOTOR_LA
  @{ */

/* Symbols to be used with PORT driver */
#define FTM_MOTOR_LA_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define FTM_MOTOR_LA_PIN 1U                   /*!<@brief PORT pin number */
#define FTM_MOTOR_LA_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*! @name PORTC2 (number 105), MOTOR_LB
  @{ */

/* Symbols to be used with PORT driver */
#define FTM_MOTOR_LB_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define FTM_MOTOR_LB_PIN 2U                   /*!<@brief PORT pin number */
#define FTM_MOTOR_LB_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*! @name PORTA5 (number 55), MOTOR_RA
  @{ */

/* Symbols to be used with PORT driver */
#define FTM_MOTOR_RA_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define FTM_MOTOR_RA_PIN 5U                   /*!<@brief PORT pin number */
#define FTM_MOTOR_RA_PIN_MASK (1U << 5U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*! @name PORTA6 (number 58), MOTOR_RB
  @{ */

/* Symbols to be used with PORT driver */
#define FTM_MOTOR_RB_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define FTM_MOTOR_RB_PIN 6U                   /*!<@brief PORT pin number */
#define FTM_MOTOR_RB_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*! @name PORTA8 (number 60), ENCO_LA
  @{ */

/* Symbols to be used with PORT driver */
#define FTM_ENCO_LA_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define FTM_ENCO_LA_PIN 8U                   /*!<@brief PORT pin number */
#define FTM_ENCO_LA_PIN_MASK (1U << 8U)      /*!<@brief PORT pin mask */
                                             /* @} */

/*! @name PORTA9 (number 61), ENCO_LB
  @{ */

/* Symbols to be used with PORT driver */
#define FTM_ENCO_LB_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define FTM_ENCO_LB_PIN 9U                   /*!<@brief PORT pin number */
#define FTM_ENCO_LB_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                             /* @} */

/*! @name PORTB18 (number 97), ENCO_RA
  @{ */

/* Symbols to be used with PORT driver */
#define FTM_ENCO_RA_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define FTM_ENCO_RA_PIN 18U                   /*!<@brief PORT pin number */
#define FTM_ENCO_RA_PIN_MASK (1U << 18U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*! @name PORTB19 (number 98), ENCO_RB
  @{ */

/* Symbols to be used with PORT driver */
#define FTM_ENCO_RB_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define FTM_ENCO_RB_PIN 19U                   /*!<@brief PORT pin number */
#define FTM_ENCO_RB_PIN_MASK (1U << 19U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void ftm(void);

/*! @name PORTC0 (number 103), MOTOR_IL
  @{ */

/* Symbols to be used with PORT driver */
#define ADC_MOTOR_IL_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define ADC_MOTOR_IL_PIN 0U                   /*!<@brief PORT pin number */
#define ADC_MOTOR_IL_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*! @name PORTA7 (number 59), MOTOR_IR
  @{ */

/* Symbols to be used with PORT driver */
#define ADC_MOTOR_IR_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define ADC_MOTOR_IR_PIN 7U                   /*!<@brief PORT pin number */
#define ADC_MOTOR_IR_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                              /* @} */

/*! @name ADC0_SE23 (number 38), VOLT_3V3
  @{ */
/* @} */

/*! @name ADC1_SE23 (number 39), VOLT_7V2
  @{ */
/* @} */

/*! @name PORTB2 (number 83), MAG_YL
  @{ */

/* Symbols to be used with PORT driver */
#define ADC_MAG_YL_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define ADC_MAG_YL_PIN 2U                   /*!<@brief PORT pin number */
#define ADC_MAG_YL_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                            /* @} */

/*! @name PORTB3 (number 84), MAG_YR
  @{ */

/* Symbols to be used with PORT driver */
#define ADC_MAG_YR_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define ADC_MAG_YR_PIN 3U                   /*!<@brief PORT pin number */
#define ADC_MAG_YR_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                            /* @} */

/*! @name PORTB0 (number 81), MAG_XL
  @{ */

/* Symbols to be used with PORT driver */
#define ADC_MAG_XL_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define ADC_MAG_XL_PIN 0U                   /*!<@brief PORT pin number */
#define ADC_MAG_XL_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                            /* @} */

/*! @name PORTB1 (number 82), MAG_XR
  @{ */

/* Symbols to be used with PORT driver */
#define ADC_MAG_XR_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define ADC_MAG_XR_PIN 1U                   /*!<@brief PORT pin number */
#define ADC_MAG_XR_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                            /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void adc(void);

/*! @name PORTE1 (number 2), SD_D0
  @{ */

/* Symbols to be used with PORT driver */
#define SDHC_SD_D0_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define SDHC_SD_D0_PIN 1U                   /*!<@brief PORT pin number */
#define SDHC_SD_D0_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                            /* @} */

/*! @name PORTE0 (number 1), SD_D1
  @{ */

/* Symbols to be used with PORT driver */
#define SDHC_SD_D1_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define SDHC_SD_D1_PIN 0U                   /*!<@brief PORT pin number */
#define SDHC_SD_D1_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                            /* @} */

/*! @name PORTE5 (number 8), SD_D2
  @{ */

/* Symbols to be used with PORT driver */
#define SDHC_SD_D2_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define SDHC_SD_D2_PIN 5U                   /*!<@brief PORT pin number */
#define SDHC_SD_D2_PIN_MASK (1U << 5U)      /*!<@brief PORT pin mask */
                                            /* @} */

/*! @name PORTE4 (number 7), SD_D3
  @{ */

/* Symbols to be used with PORT driver */
#define SDHC_SD_D3_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define SDHC_SD_D3_PIN 4U                   /*!<@brief PORT pin number */
#define SDHC_SD_D3_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                            /* @} */

/*! @name PORTE3 (number 4), SD_CMD
  @{ */

/* Symbols to be used with PORT driver */
#define SDHC_SD_CMD_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define SDHC_SD_CMD_PIN 3U                   /*!<@brief PORT pin number */
#define SDHC_SD_CMD_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                             /* @} */

/*! @name PORTE2 (number 3), SD_CLK
  @{ */

/* Symbols to be used with PORT driver */
#define SDHC_SD_CLK_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define SDHC_SD_CLK_PIN 2U                   /*!<@brief PORT pin number */
#define SDHC_SD_CLK_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                             /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void sdhc(void);

#define SOPT5_LPUART0TXSRC_LPUART_TX 0x00u /*!<@brief LPUART0 transmit data source select: LPUART0_TX pin */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void sys(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
