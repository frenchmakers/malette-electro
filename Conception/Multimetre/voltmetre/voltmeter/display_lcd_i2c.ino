#include "config.h"

#if DISPLAY_TYPE == DISPLAY_TYPE_LCD_I2C
/*
** Example Arduino sketch for SainSmart I2C LCD Screen 16x2
** based on https://bitbucket.org/celem/sainsmart-i2c-lcd/src/3adf8e0d2443/sainlcdtest.ino
** by
** Edward Comer
** LICENSE: GNU General Public License, version 3 (GPL-3.0)

** This example uses F Malpartida's NewLiquidCrystal library. Obtain from:
** https://bitbucket.org/fmalpartida/new-liquidcrystal

** Modified â€“ Ian Brennan ianbren at hotmail.com 23-10-2012 to support Tutorial posted to Arduino.cc

** Written for and tested with Arduino 1.0
**
** NOTE: Tested on Arduino Uno whose I2C pins are A4==SDA, A5==SCL

*/
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C  lcd(I2C_ADDR, En_pin, Rw_pin, Rs_pin, D4_pin, D5_pin, D6_pin, D7_pin);

/**
 * Initialisation de l'écran
 */
void display_setup() 
{
  lcd.begin (16, 2); //  <<----- My LCD was 16x2

  // Switch on the backlight
  lcd.setBacklightPin(BACKLIGHT_PIN, POSITIVE);
  lcd.setBacklight(HIGH);
}

/**
 * Affichage de l'accueil
 */
void display_welcome()
{
  lcd.clear();
  lcd.print("---- FABLAB ----");
  lcd.setCursor (0, 1);
  lcd.print(">French  Makers<");
}

/**
 * Affichage de la valeur voltmètre
 */
void display_voltmeter_value(double value) 
{
  lcd.clear();
  lcd.print("Voltage");
  lcd.setCursor (0, 1);
  lcd.print(value);  
  lcd.print("V");
}

#endif
