#include "config.h"

void setup()
{
  #if DEBUG
  Serial.begin(9600);
  #endif
  display_setup();
  display_welcome();
  delay(2000);
}

void loop()
{
  readVoltmeter();
}

void readVoltmeter()
{
  int raw = 0;
  float input_voltage = 0;
  float buffer = 0;

  raw = analogRead(VOLTMETER_PIN);
  buffer = (raw * VOLTMETER_VIN) / 1024.0; 
  input_voltage = buffer / (VOLTMETER_R2/(VOLTMETER_R1+VOLTMETER_R2));

  if (input_voltage < 0.1) 
  {
     input_voltage=0.0;
  } 
  #if DEBUG
  Serial.print("Raw= ");
  Serial.println(raw);
  Serial.print("b= ");
  Serial.println(buffer);
  Serial.print("v= ");
  Serial.println(input_voltage);
  #endif

  display_voltmeter_value(input_voltage);
  
  #if VOLTMETER_PAUSE>0
  delay(VOLTMETER_PAUSE);
  #endif
}

