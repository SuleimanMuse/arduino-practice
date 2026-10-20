//No microphone so I skipped this one but this would be my code converted from mblock
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
  pinMode(1,OUTPUT);
  pinMode(13,OUTPUT);
  digitalWrite(0,0);
  digitalWrite(1,0);
  digitalWrite(13,0);
  while(1) {
      if(count > 70){
        digitalWrite(13,1);
        _delay(3);

      }

      _loop();
  }

}

void _loop() {
}

void loop() {
  _loop();
}
