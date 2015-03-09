int pin = 0;
int potentiometer_value = 0;

void setup() {
    
  Serial.begin(9600);
  
}

void loop() {

  potentiometer_value = analogRead(pin);
  Serial.println(potentiometer_value);
  delay(500);
  
}
