# Simon Fraser University ENSC 100 Project

## Fall 2017

### Version 2.0.1

#### Group: Iota

#### Professor: Michael Sjoerdsma

#### Teaching Assistance: Jordan David Lui

Team Members: 
<ul>
<li>Antonio Kim</li>
<li>Claire Jeanette Bareilles</li>
<li>Erika Lia Fernandez</li>
<li>Jehaan Jacob Joseph</li>
<li>Nathan Bays Zavaglia</li>
<li>Takunda Lester Mwinjilo</li>
<li>Owen Kin Shek Cheuk</li>
</ul>

Description:

This Arduino Project measures the temperature from two sensors and indicate whether the two sensor readings are above 40 degrees celsius. The project consists of Arduino Uno, Temperature Sensor DS18B20, Breadboard, Green and Red LED, 1k Ohm resistor, micro servo motor, and 22 gauge wires. The Arduino requires a personal computer with Arduino IDE installed, which can be found https://www.arduino.cc. Please refer to the website to download the app. 

Project summary

This water conservation recirculation project, is designed to restrict the outflow of water from a faucet until the water reaches a preset temperature, in our case, 28 degrees Celsius. It does this by comparing the temperature readings from two sensors which will indicate whether the water from two different locations is above 28 degrees Celsius. The water will meet the temperature by introducing hot water into the recirculation process which mixes the hot water in with the cold. When both sensors’ readings are above 28 degrees Celsius, the LED will turn from red to green, turning the micro servo, which indicates to the user that the valve can be turned, thereby opening the diverter valve and allowing the water to flow to the output. The project consists of Arduino Uno, Temperature Sensor DS18B20, Breadboard, Green and Red LED, 1k Ohm resistor, micro servo motor, 22 gauge wires, a diverter valve, a check valve, a T junction, half inch plastic piping, clamps, small submersible pumps, and three buckets.   

Design Process

In the Microprocessor unit, we decided to use Arduino Uno microcontroller to read temperature and control the output. Due to its simplicity to learn the coding as soon as possible for everyone, we found the Arduino to be a perfect fit for everyone. In terms of temperature reading, because our system is based on water flow, we needed to use a waterproof temperature sensor, which are more durable than typical sensors such as the TMP36, which are centigrade temperature sensors.
The outputs are simple green and red LEDs, to show the user when to turn, and we also decided to integrate a micro servo motor to have another visual output.

For the mechanical design process, the first four meetings were spent brain storming what the system would require. In these initial meetings, several possible schematics were proposed. Once the final design was implemented we began constructing the plumbing. Three containers are used, one for inflow, containing a pump, one to capture water at the output, and one to act as a recirculation buffer, which also contains a pump. A switchable valve, the diverter valve, is used to change from recirculation to output, and the buffer connects at the midpoint of the main line to allow mixing. We did research online to find materials we could use. With our limited budget in mind we ordered two small pumps to aid in circulating water and the necessary fittings,and a valve, the check valve, to prevent backflow – particularly into the buffer.

Future Directions and work

If we had more time, we would’ve liked to have an actual servo motor turn the valve instead of LEDs and Servo motor asking the user to turn the valve. We would’ve also liked to display the temperature, which were discussed during the design process. This could’ve been displayed on 2 digit 7-segment display on each sensor, and/or add LCD display to display the system readings. As well, we could’ve had the user control the preset temperature range, so that the user can change the temperature to their desired range, using either pushbuttons or potentiometer. If we had a bigger budget we would’ve added a proper faucet head, and sink. 

The following Repository consists of:
<ul>
    <li> Arduino-Temperature-Control-Library-master.zip</li> The following zip file is from
         https://create.arduino.cc/projecthub/TheGadgetBoy/ds18b20-digital-temperature-sensor-and-arduino-9cc806
    <li> OneWire.zip </li> Also obtained from website reference above
    <li> Temperature.ino </li> Arduino file which displays the LED Green when two temperature sensors are 40 degrees celsius
         or above. Else, the LED displays Red.
    <li> Arduino.ino</li> Controls the angle of the servo motor, which controls the valve's water flow
    <li> README.md </li> The summary is written in Markdown langauge
</ul>

### Version update Summary

2.0.1 Added Project Summary, Design Process, and Future Drections and work into README.md

2.0.0 Removed Servo file, included the Servo into Temperature.ino, and tested to ensure the Arduino reads and rotates
      the servo when both temperatures read over 28 degrees celsius.

1.2.2 Replaced all the Arduino files into a folder, and commented on Servo.ino

1.2.1 Adding Servo file and updating README.md

1.1.5 Added link for course description

1.1.4 Correction on the visual output

1.1.3 Major modification was made on the README.md, which were the visual modification
      of the list, as well adding the list of repo file. Version update is now shown on the
      repo summary

1.1.0 All the Files and small update on README.md was added to the repo

---

The Repository is maintained by: Antonio Kim

Please see [Course Description](https://www.sfu.ca/students/calendar/2018/spring/courses/ensc/100.html) For more information.

Last updated: December 6th, 2017
