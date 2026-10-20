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
      _delay(0.5);
      digitalWrite(13,1);
      for(int count2=0;count2<5;count2++){
        while(!(digitalRead(2) == 1.000000))
        {
          _loop();
        }
        _delay(0.5);
      }
      digitalWrite(13,0);
      _delay(2);

      _loop();
  }

}

void _loop() {
}

void loop() {
  _loop();
}
