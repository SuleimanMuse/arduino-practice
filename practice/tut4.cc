/* Task
  Create 3 LED Circuits
  Red (Blink 5 times fast)
  Green (Blink 10 times slow)
  Blue (Blink 15 times very slow) 
*/

int redLED = 13;
int greenLED = 10;
int blueLED = 8;

int fast = 150;
int slow = 300;
int vslow = 500;

int between = 300;

void setup() {

  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);

}

void loop() {

  for(int i = 0; i<5; i++){
    digitalWrite(redLED, HIGH);
    delay(fast);
    digitalWrite(redLED, LOW);
    delay(fast);
  } delay(between);

  for(int k = 0; k<10; k++){
    digitalWrite(greenLED, HIGH);
    delay(slow);
    digitalWrite(greenLED, LOW);
    delay(slow);
  } delay(between);

  for(int j = 0; j<15; j++){
    digitalWrite(blueLED, HIGH);
    delay(vslow);
    digitalWrite(blueLED, LOW);
    delay(vslow);
  } delay(1000);



}
