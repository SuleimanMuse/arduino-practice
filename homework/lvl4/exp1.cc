#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  pinMode(0,OUTPUT);
  while(1) {
      digitalWrite(0,1);
      _delay(1);
      digitalWrite(0,0);
      _delay(1);

      _loop();
  }

}

void _loop() {
}

void loop() {
  _loop();
}
