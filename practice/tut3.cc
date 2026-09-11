// Loops for 3 LED lights repeating 5, 10 and 15 times respectively.
void setup() {

  pinMode(13, OUTPUT);
for(int i = 0; i<5; i++){
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}delay(3000);

for(int i = 0; i<10; i++){
  delay(1000);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
}delay(3000);

for(int i = 0; i<15; i++){
  delay(1000);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  delay(1000);
}delay(3000);

}

// the loop routine runs over and over again forever:
void loop() {




}
