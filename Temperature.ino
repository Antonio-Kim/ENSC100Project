#include <OneWire.h> 
#include <DallasTemperature.h>
/********************************************************************/
// Data wire is plugged into pin 2 on the Arduino 
#define ONE_WIRE_BUS 2 
#define TWO_WIRE_BUS 4
/********************************************************************/
// Setup a oneWire instance to communicate with any OneWire devices  
// (not just Maxim/Dallas temperature ICs) 
OneWire oneWire(ONE_WIRE_BUS);
OneWire ds(TWO_WIRE_BUS); 
/********************************************************************/
// Pass our oneWire reference to Dallas Temperature. 
DallasTemperature sensors(&oneWire);

/********************************************************************/ 
int green=4;
int red=5;
int SENSOR1=0;
int SENSOR2=0;
void setup(void) 
{ 
 // start serial port 
 Serial.begin(9600); 
 Serial.println("Dallas Temperature IC Control Library Demo"); 
 // Start up the library 
 sensors.begin(); 
 
 pinMode(red,OUTPUT);
 pinMode(green,OUTPUT);
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

 int SENSOR1 = sensors.getTempCByIndex(0);
 int SENSOR2 = sensors.getTempCByIndex(1);


/*if(abs(SENSOR1-SENSOR2)<2)
{ 
  digitalWrite(green, HIGH);
  digitalWrite(red, LOW);
}
else{
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
}*/

// THIS IS WHAT WE'LL USE FOR ACTUAL PROJECT
if ((SENSOR1 > 40) && (SENSOR2 > 40))
{
  digitalWrite(green, HIGH);
  digitalWrite(red, LOW);
}
else
{
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
}
 
// Why "byIndex"?  
   // You can have more than one DS18B20 on the same bus.  
   // 0 refers to the first IC on the wire 
   delay(1000); 
} 
