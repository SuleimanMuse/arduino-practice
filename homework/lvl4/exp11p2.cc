#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  pinMode(2,INPUT);
  Serial.begin(115200);
  while(1) {
      while(!(digitalRead(2) == 0.000000))
      {
        _loop();
      }
      while(!(digitalRead(2) == 1.000000))
      {
        _loop();
        Serial.println("not pressed");
        _delay(1);

      }
      while(!(digitalRead(2) == 0.000000))
      {
        _loop();
        Serial.println("pressed");
        _delay(1);

      }

      _loop();
  }

}

void _loop() {
}

void loop() {
  _loop();
}
