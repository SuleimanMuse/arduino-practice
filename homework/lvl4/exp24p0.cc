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
  Serial.begin(115200);
  digitalWrite(0,0);
  digitalWrite(1,0);
  count = 0;
  while(1) {
      Serial.println(count);
      _delay(1);
      count += 1;

      _loop();
  }

}

void _loop() {
}

void loop() {
  _loop();
}
