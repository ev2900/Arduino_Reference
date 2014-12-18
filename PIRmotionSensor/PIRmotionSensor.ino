int pir_pin = 4;

void setup() {
  
  pinMode(pir_pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  
  if(digitalRead(pir_pin) == HIGH) {
   
    Serial.println("Motion Detected");
   }
   
  if(digitalRead(pir_pin) == LOW) {
   
    Serial.println("No motion Detected");
   }
   
   delay(1000); 
   
}
