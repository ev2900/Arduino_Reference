int blueled = 2;
int greenled = 3;
int redled = 4;

void setup() {
  
  pinMode(blueled, OUTPUT);
  pinMode(greenled, OUTPUT);
  pinMode(redled, OUTPUT);

}

void loop() {
  
  digitalWrite(redled, HIGH);
  delay(500);
  digitalWrite(redled, LOW);
  
  digitalWrite(greenled, HIGH);
  delay(500);
  digitalWrite(greenled, LOW);
  
  digitalWrite(blueled, HIGH);
  delay(500);
  digitalWrite(blueled, LOW);

}
