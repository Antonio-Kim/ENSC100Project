// Adding Servo header file. The header file is part of Arduino IDE, hence no
// need for quotation
#include <Servo.h>

// Declaration of variables. Here, myServo is an object of Servo class, and 
// the angle of servo motor starts at 0 degrees
Servo myServo;
int angle = 0;

// In the setup, we start with initiating the servo motor at pin 9 of the 
// Arduino. Note that the middle wire other than power or ground wire is 
// attached to the arduino here
void setup() {
  myServo.attach(9);
}

// Precondition: intial angle of the servo, which is 0 
// Postcondition: the angle of the servo motor rotates 180 degrees every 
// 3 seconds. The procedure works in the following steps:
//      1.  The arduino initiates the angle of the motor.
//      2.  There is a three delay seconds.
//      3.  Angle is then set to 180 degrees.
//      4.  The arduino initiates the angle of the motor
//      5.  Delay of three seconds once again.
//      6.  Angle is then set to 0 degrees.
// The loop continues until there is a disconnect of power on the arudino.
void loop() {
  myServo.write(angle);
  delay(3000);
  angle = 180;
  myServo.write(angle);
  delay(3000);
  angle = 0;
}
