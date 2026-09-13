// Go from low to intermidiate to high using analogWrite

int pin=3;
int brightness;


void setup() {
  // put your setup code here, to run once:

  pinMode(pin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  delay(500);
  brightness = 5;

  for (int i = 0; i<3; i++){
    analogWrite(pin, brightness);
    delay(1000);
    brightness += 100;
  }  

  brightness = 0;
  analogWrite(pin, brightness);
  delay(1000);

}
