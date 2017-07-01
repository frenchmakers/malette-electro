/**
 * Ecran LCD-I2C
 */
#define DISPLAY_TYPE_LCD_I2C 1

/**
 * Configuration écran LCD-I2C
 */
#if DISPLAY_TYPE == DISPLAY_TYPE_LCD_I2C

#define I2C_ADDR    0x27 // <<----- Add your address here.  Find it from I2C Scanner
#define BACKLIGHT_PIN     3
#define En_pin  2
#define Rw_pin  1
#define Rs_pin  0
#define D4_pin  4
#define D5_pin  5
#define D6_pin  6
#define D7_pin  7

#endif

