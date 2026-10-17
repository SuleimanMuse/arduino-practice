#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  pinMode(1,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(0,OUTPUT);
  while(1) {
      digitalWrite(1,1);
      _delay(3);
      digitalWrite(1,0);
      digitalWrite(13,1);
      _delay(1);
      digitalWrite(13,0);
      digitalWrite(0,1);
      _delay(3);
      digitalWrite(0,0);

      _loop();
  }

}

void _loop() {
}

void loop() {
  _loop();
}
