#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include "hal/gpio_types.h"

#define ESP32_S3_CROWPANEL_2_1

static const gpio_num_t SDA = GPIO_NUM_38;
static const gpio_num_t SCL = GPIO_NUM_39;

static const gpio_num_t SCK = GPIO_NUM_2;
static const gpio_num_t SS = GPIO_NUM_16; // CS
static const gpio_num_t MOSI = GPIO_NUM_0; // not used, but defined for compatibility with libraries that use SPI.h
static const gpio_num_t MISO = GPIO_NUM_0; // not used, but defined for compatibility with libraries that use SPI.h

static const gpio_num_t ENCODER_CLK_PIN = GPIO_NUM_42; // CLK to detect CW if same value or CCW if different value (ENCODER_A_PIN)
static const gpio_num_t ENCODER_DT_PIN = GPIO_NUM_4; // interrupt trigger (ENCODER_B_PIN)

static const gpio_num_t RX = GPIO_NUM_44;
static const gpio_num_t TX = GPIO_NUM_43;

// PCF8574 Extended IO
static const uint8_t I2C_IO_EXPANDER_ADDRESS = 0x21; // pcf8574
static const uint8_t I2C_TOUCH_ADDRESS = 0x15;  // often but not always 0x15!
static const uint8_t I2C_SCREEN_ADDRESS = 0x3C;
static const gpio_num_t TOUCHSCREEN_RESET_PIN = GPIO_NUM_0;
static const gpio_num_t TOUCHSCREEN_INTERRUPT_PIN = GPIO_NUM_2;
static const gpio_num_t LCD_POWER_PIN = GPIO_NUM_3;
static const gpio_num_t LCD_RESET_PIN = GPIO_NUM_4;
static const gpio_num_t ENCODER_BUTTON_PIN = GPIO_NUM_5;

// Screen
static const uint16_t SCREEN_HEIGHT = 480;
static const uint16_t SCREEN_WIDTH = 480;
static const gpio_num_t SCREEN_BACKLIGHT_PIN = GPIO_NUM_6;

#endif