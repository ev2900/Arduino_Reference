#include <Servo.h>

int servoPin = 3;

Servo servo;

void setup() {
  
   servo.attach(servoPin);
   
   Serial.begin(9600);
}

void loop() {
   
   int angle = 90.0;
   
   servo.write(angle);
   
}
