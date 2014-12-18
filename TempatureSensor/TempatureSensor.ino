int temp_sensor_pin = 0;

void setup() 
{
  
  Serial.begin(9600);
  
}

void loop() 
{
  
  int temp_reading = analogRead(temp_sensor_pin);
  
  float voltage = temp_reading * 5.0;
  voltage /= 1024.0
  
  float tempatureC = (voltage - 0.5) * 100;
  float tempatureF = (temperatureC * 9.0/5.0) + 32.0;
  Serial.println(temperatureF);
  
}
