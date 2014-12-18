int light_intensity = 0;
int photo_resistor_pin = 0; 

void setup() {
  
  Serial.begin(9600);
  
}

void loop () {
  
  light_intensity = analogRead(photo_resistor_pin);
  Serial.println(light_intensity); 
  
}

