## Case study report

















 
## CASE STUDY -1

				Water Level Alarm Circuit



Introduction:

 Water is a very important part of everyone's life, so there are water tanks in different places such as housing, industry and farms. Everyone faces the problem of overflow and wasted water on a daily basis.
And thus comes the need for the water level alarm circuit. This simple DIY project can be the best solution for this problem.

8051 microcontroller is the main part of this project (89s51 to be specific). We have used a float sensor In this project. This float sensor is used to detect the level of the water inside a water tank. Ideally, this sensor should be attached to the top lid of the water tank or the liquid tank. The float attached to the sensor will move up and down as the water level increases or decreases.
The output voltage from the sensor is given to a comparator circuit. This comparator has second input from a variable resistor. This variable resistor is used to decide the threshold water level for which the buzzer should be turned on.
This potentiometer and sensor provide an extra feature to this project. Other water level alarm circuits do not have a user-defined threshold level. However, in this project users can define their own threshold level using this potentiometer.

 
Block Diagram:

 ![water-level-alarm-circuit](https://user-images.githubusercontent.com/98813874/154856662-d11e703d-5565-4435-b2e7-7b4cdad5923c.png)

 
Low level requirements:

•	Measure the water level when the circuits indicate when the tank its half and full

•	When the water level is too high or too low or exceeds the higher limit, it can detect the water level easily by hearing an alarm sound

•	the toggle switch  is used to turn on & turn off the buzzer.









High level requirements:

•	The output voltage from the sensor is given to a comparator circuit.

•	8051 microcontroller is the main requirement of this project.

•	 This buzzer is turned on whenever the water level is above the threshold level.

•	We include Red LED for the visual indication of the threshold level. LED and buzzer are turned on at the same time.

 
Components:

1)	   Microcontroller:  We use Arduino Uno is used as microcontroller here.

2)	 Water level sensor: We have used a float sensor here. This float sensor is used to detect the level of the water inside a water tank. Ideally, this sensor should be attached to the top lid of the water tank or the liquid tank. The float attached to the sensor will move up and down as the water level increases or decreases.

3)	1-Buzzer: On the output side, we have the main component to alert the user and that is a piezoelectric buzzer. This buzzer is turned on whenever the water level is above the threshold level

4)	Comparator: This comparator has second input from a variable resistor. This variable resistor is used to decide the threshold water level for which the buzzer should be turned on.

5)	LCD Display: We also have a Red LED for the visual indication of the threshold level. LED and buzzer are turned on at the same time.


 
## CASE STUDY -2

                Geo Location Guide Using RF
Introduction:

Theme parks/ national parks as well as other huge tourist attractions need directional guides to inform user about his location I the area. A park guidance system using RF technology that works wirelessly to guide user about his current location. This proves as a very handy and convenient medium for guiding tourists through the park. This system proposes to replace the you are here boards mounted through such parks. Our system uses an RF receiver circuit in order to track user. The user may carry the circuit with him. It then consists of RF transmitters placed at various locations across the park. 



These transmitters constantly emit RF signals. When the RF receiver circuit carried by user comes in range on an RF receiver it detects that the user is in range of that particular RF transmitter. This signals it to display the location of the user. Each location area is identified uniquely by an RF transmitter. When user enters the area the circuit reads the transmitter code and displays the location on an LCD screen.
.

 
Block Diagram:

![image](https://user-images.githubusercontent.com/98813874/154856709-fe973c1e-b77d-40c1-8b84-201320716cb0.png)


![image](https://user-images.githubusercontent.com/98813874/154856728-6e605d3b-7b70-47e2-a58a-e8a332c9bc29.png)


 
 
 
Components:

•	RF receiver
•	Oscillator
•	Decoder
•	Microcontroller
•	Encoder
•	RF Transmitter
•	Power regulator
•	Power supply
•	Display

 
Low level requirements:

•	This system uses an RF receiver circuit in order to track user

•	The user may carry the circuit with him.

•	Each location area is identified uniquely by an RF transmitter

•	When user enters the area the circuit reads the transmitter code and displays the location on an LCD screen.











High level requirements:

•	consists of RF transmitters placed at various locations across the park or community.

•	When the RF receiver circuit carried by user comes in range on an RF receiver it detects that the user is in range of that particular RF transmitter. 

•	 This signals it to display the location of the user.
