//alternatively
#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

float count = 0;

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  pinMode(13,OUTPUT);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  digitalWrite(13,1);
  while(1) {
      if((digitalRead(2) == 1.000000)  &&  (digitalRead(3) == 1.000000)){
        digitalWrite(13,0);

      }else{
        digitalWrite(13,1);

      }

      _loop();
  }

}

void _loop() {
}

void loop() {
  _loop();
}
