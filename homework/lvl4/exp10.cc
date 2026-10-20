#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  pinMode(13,OUTPUT);
  pinMode(2,INPUT);
  digitalWrite(13,0);
  while(1) {
      while(!(digitalRead(2) == 1.000000))
      {
        _loop();
      }
      digitalWrite(13,1);
      _delay(0.5);
      while(!(digitalRead(2) == 1.000000))
      {
        _loop();
      }
      digitalWrite(13,0);
      _delay(0.5);

      _loop();
  }

}

void _loop() {
}

void loop() {
  _loop();
}
