#include <Servo.h>
Servo myServo;
int angle = 0;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  myServo.write(angle);
  delay(3000);
  angle = 180;
  myServo.write(angle);
  delay(3000);
  angle = 0;
}
