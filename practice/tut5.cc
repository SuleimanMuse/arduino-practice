/* Task
  Count from 0 to 15 in binary using 4 LEDs
  Red
  Green
  Blue
  Purple
  
*/

int redLED = 13;
int greenLED = 10;
int blueLED = 8;
int purpleLED = 5;



void setup() {
  // put your setup code here, to run once:

  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(purpleLED, OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
  
 /* Recognized that the pattern in each column but struggled to translate 
    so that I could change the states in this coding language. Just going to 
    manually do the first 10.
*/

/* Column concept essentially the same as t/f values in discrete math with each 
    column value 2^n being the length before the pattern repeats.
*/

/* It'd take me longer to come up with the code for that than to just write 
  each one individually though.
*/

 // ZERO
  digitalWrite(purpleLED, LOW);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);
  delay(2000);

  // ONE
  digitalWrite(purpleLED, LOW);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, HIGH);
  delay(20000);

  // TWO
  digitalWrite(purpleLED, LOW);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, LOW);
  delay(2000);

  // THREE
  digitalWrite(purpleLED, LOW);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, HIGH);
  delay(2000);

  // FOUR
  digitalWrite(purpleLED, LOW);
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);
  delay(2000);

  // FIVE
  digitalWrite(purpleLED, LOW);
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, HIGH);
  delay(2000);

  // SIX
  digitalWrite(purpleLED, LOW);
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, LOW);
  delay(2000);

  // SEVEN
  digitalWrite(purpleLED, LOW);
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, HIGH);
  delay(2000);

  // EIGHT
  digitalWrite(purpleLED, HIGH);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);
  delay(2000);

  // NINE
  digitalWrite(purpleLED, HIGH);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, HIGH);
  delay(2000);

  // TEN
  digitalWrite(purpleLED, HIGH);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, LOW);
  delay(2000);

  // ELEVEN
  digitalWrite(purpleLED, HIGH);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, HIGH);
  delay(2000);

  // TWELVE
  digitalWrite(purpleLED, HIGH);
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);
  delay(2000);

  // THIRTEEN
  digitalWrite(purpleLED, HIGH);
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, HIGH);
  delay(2000);

  // FOURTEEN
  digitalWrite(purpleLED, HIGH);
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, LOW);
  delay(2000);

  // FIFTEEN
  digitalWrite(purpleLED, HIGH);
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, HIGH);
  delay(6000);
}
