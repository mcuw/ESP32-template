#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define ESP32_S3_CROWPANEL_2_1

static const uint8_t SDA = 38;
static const uint8_t SCL = 39;

static const uint8_t SCK = 2;
static const uint8_t SS = 16;
static const uint8_t MOSI = 0; // not used, but defined for compatibility with libraries that use SPI.h
static const uint8_t MISO = 0; // not used, but defined for compatibility with libraries that use SPI.h

static const uint8_t ENCODER_A_PIN = 42;
static const uint8_t ENCODER_B_PIN = 4;

static const uint8_t BREATH_LED_PIN = 43;

static const uint8_t RX = 50;
static const uint8_t TX = 49;

static const uint8_t BACKLIGHT_LED_PIN = 6;

// PCF8574 Extended IO
static const uint8_t I2C_IO_EXPANDER_ADDRESS = 0x21; // pcf8574
static const uint8_t I2C_TOUCH_ADDR = 0x15;  // often but not always 0x15!
static const uint8_t TOUCHSCREEN_RESET_PIN = 0;
static const uint8_t TOUCHSCREEN_INTERRUPT_PIN = 2;
static const uint8_t LCD_POWER_PIN = 3;
static const uint8_t LCD_RESET_PIN = 4;
static const uint8_t ENCODER_BUTTON_PIN = 5;

#endif /* Pins_Arduino_h */
