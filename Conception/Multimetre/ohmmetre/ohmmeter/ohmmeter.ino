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
  readOhmmeter();
}

void readOhmmeter()
{
  int raw = 0;
  float Vout = 0;
  float R2 = 0;
  float buffer = 0;
  
  raw = analogRead(OHMMETER_PIN);
  if (raw>2)
  {
    buffer = raw * OHMMETER_VIN;
    Vout = (buffer) / 1024.0;
    buffer = (OHMMETER_VIN / Vout) - 1;
    R2 = OHMMETER_R1 * buffer;
    
    display_ohmmeter_value(R2);
    
    #if DEBUG
    Serial.print("Raw: ");
    Serial.println(raw);
    Serial.print("Vout: ");
    Serial.println(Vout);
    Serial.print("R2: ");
    Serial.println(R2);
    #endif

    #if OHMMETER_PAUSE>0
    delay(OHMMETER_PAUSE);
    #endif
  } else {
    display_ohmmeter_overload();
    delay(100);
  }
}

