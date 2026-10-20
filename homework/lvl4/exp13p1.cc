#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

float count = 0;

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  pinMode(0,OUTPUT);
  pinMode(A0+5,INPUT);
  digitalWrite(0,0);
  while(1) {
      count = analogRead(A0+5);
      if(count > 100){
        digitalWrite(0,1);
        _delay(1);

      }else{
        digitalWrite(0,0);

      }

      _loop();
  }

}

void _loop() {
}

void loop() {
  _loop();
}
