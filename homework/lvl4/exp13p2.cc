#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

float count = 0;

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(A0+5,INPUT);
  Serial.begin(115200);
  digitalWrite(8,0);
  digitalWrite(9,0);
  while(1) {
      count = analogRead(A0+5);
      if(count > 100){
        digitalWrite(8,1);
        Serial.println("forwards");

      }else{
        digitalWrite(9,0);
        Serial.println("backwards");

      }

      _loop();
  }

}

void _loop() {
}

void loop() {
  _loop();
}
