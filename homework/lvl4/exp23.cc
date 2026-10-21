#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

void pivot_left(){
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(10,1);
  digitalWrite(11,0);

}
void Forward(){
  digitalWrite(8,1);
  digitalWrite(9,1);
  digitalWrite(10,1);
  digitalWrite(11,1);

}
void Spin_left(){
  digitalWrite(8,0);
  digitalWrite(9,1);
  digitalWrite(10,1);
  digitalWrite(11,0);

}
void pause(){
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,0);

}

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(2,INPUT);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,0);
  while(1) {
      while(!(digitalRead(2) == 1.000000))
      {
        _loop();
      }
      Forward();
      _delay(3);
      Spin_left();
      _delay(0.3);
      Forward();
      _delay(5);
      pause();

      _loop();
  }

}

void _loop() {
}

void loop() {
  _loop();
}
