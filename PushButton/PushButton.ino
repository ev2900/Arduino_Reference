int button_pin = 4; 
int button_state = 0;

void setup() {
 
  pinMode(button_pin, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  
  button_state = digitalRead(button_pin);
  
    if (button_state == HIGH) {
    
    Serial.println("button is pressed");
  
  }

  else {
    
    Serial.println("button is not pressed");
  }

delay(1000);
}
