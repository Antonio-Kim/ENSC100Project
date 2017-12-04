#include <OneWire.h> 
#include <Servo.h>
#include <DallasTemperature.h>

// Data wire is plugged into pin 2 and pin 3 on the Arduino 
// Both wires are plugged into same row on the breadboard, and 
// the row is connected by resistor to the power column
#define ONE_WIRE_BUS 2 
#define TWO_WIRE_BUS 3

// Setup a oneWire instance to communicate with any OneWire devices.
OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to Dallas Temperature. 
DallasTemperature sensors(&oneWire);

// Initializing the global variables for the setup and loop functions
Servo myServo;
int green=5;
int red=6;
int SENSOR1=0;
int SENSOR2=0;
int angle = 0;

void setup(void) 
{ 
 // start serial port 
 Serial.begin(9600); 
 // Start up the library 
 sensors.begin(); 
 
 pinMode(red,OUTPUT);
 pinMode(green,OUTPUT);
 myServo.attach(9); // Servo is attached  to pin 9 of Arduino
} 
void loop(void) 
{ 
 // call sensors.requestTemperatures() to issue a global temperature 
 // request to all devices on the bus 
/********************************************************************/
 Serial.print(" Requesting temperatures at sensors:"); 
 sensors.requestTemperatures(); // Send the command to get temperature readings 
 Serial.println("DONE"); 
/********************************************************************/
 Serial.print("Temperature 1 is: "); 
 Serial.println(sensors.getTempCByIndex(0));
 Serial.print("Temperature 2 is: "); 
 Serial.println(sensors.getTempCByIndex(1));

// The sensors read the the temperature and assign the values
// into SENSOR1 and SENSOR2
 int SENSOR1 = sensors.getTempCByIndex(0);
 int SENSOR2 = sensors.getTempCByIndex(1);

// If both sensors read temperature over 28, the servo motor will
// turn to indicate the valve can be turned on
if ((SENSOR1 > 28) && (SENSOR2 > 28))
{
  digitalWrite(green, HIGH);
  digitalWrite(red, LOW);
  myServo.write(0);
}
else
{
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  myServo.write(90);
}

   delay(1000);
} 
