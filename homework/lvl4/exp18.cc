#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

float count = 0;

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  pinMode(6,OUTPUT);
  pinMode(A0+0,INPUT);
  digitalWrite(6,0);
  while(1) {
      if(analogRead(A0+0) < 100){
        digitalWrite(6,0);

      }else{
        digitalWrite(6,1);

      }

      _loop();
  }

}

void _loop() {
}

void loop() {
  _loop();
}
