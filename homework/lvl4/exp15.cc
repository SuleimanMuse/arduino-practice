#include <Wire.h>
#include <SoftwareSerial.h>

float count = 0;

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  pinMode(2,INPUT);
  pinMode(A0+0,INPUT);
  Serial.begin(115200);
  while(!(digitalRead(2) == 1.000000))
  {
    _loop();
  }
  while(1) {
      Serial.println(analogRead(A0+0));
      _delay(0.3);

      _loop();
  }

}

void _loop() {
}

void loop() {
  _loop();
}
