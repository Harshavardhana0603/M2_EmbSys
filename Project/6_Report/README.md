
  1.[Introduction](#introduction)
  
  2.[Purpose](#purpose)

  3.[Requirements](#requirements)
  
   * [High level requirement](##high-level-requirements)
  * [Low level requirement](##low-level-requirements)

  4.[Swot analysis](#swot-analysis)
  
  5.[Block diagram](#block-diagram)
  
  6.[Behavioural diagram](#behavioural-diagram)
  
  7.[Flow chart](#flow-chart)
  
  8.[components](#components)
  
  9.[Circuit diagram](#circuit-diagram)
  
  10.[Test plan and output](#test-plan-and-output)
  
  11.[Advanatges](#advanatges)
  
  
  
  
  
  


# Introduction
Todays modern houses are equipped with many different technological facilities like
- Automatic lights and fans
- Remote operated curtains
And many more such systems. An automatic gate for garage or main entrance gate of compound is one of the very popular, useful and widely used one such facility. Automatic gate means it opens automatically when any one wants to enter or exit and then it closes automatically. It is equipped with sensor that detects person/two wheeler / four wheeler (or any other object) and on detecting, it opens the gate and after few seconds the gate is automatically closed. The sensors are given on both side of gate one is inside the gate and another is outside the gate. So gate automatically open from either side when anybody wants to enter or exit.





# Purpose

Whether residential or commercial, need to have security parameters installed along their perimeters or boundaries. These security parameters come in the form of fences and gates







# Requirements
## High level  requirements


| ID | Descriptions|
|----|-------------|
| HLR1| The IR sensor should sense the vehicle/object and pass signal to controller|
|HLR2|The DC motor will open/close gate when object/vehicle detects|
|HLR3| LED should on/off according to the signal |



## Low level requirements

|ID| Description|
|----|------------|
|LLR1|When the gate is closed. The red LED is ON to indicate gate is closed |
|LLR2|When any object comes in front of inside sensor (or outside sensor) it generates an interrupt. It is indicated by blue LED |
|LLR3|The motor rotates and opens the gate. The red LED turns off and green LED turns ON|
|LLR4|After the pass of the object Again green LED turns off and red LED turns on|



| ID | Descriptions|
|----|-------------|
| HLR1| The IR sensor should sense the vehicle/object and pass signal to controller|
|HLR2|The DC motor will open/close gate when object/vehicle detects|
|HLR3| LED should on/off according to the signal |



## Low level requirements

|ID| Description|
|----|------------|
|LLR1|When the gate is closed. The red LED is ON to indicate gate is closed |
|LLR2|When any object comes in front of inside sensor (or outside sensor) it generates an interrupt. It is indicated by blue LED |
|LLR3|The motor rotates and opens the gate. The red LED turns off and green LED turns ON|
|LLR4|After the pass of the object Again green LED turns off and red LED turns on|


  
  
# Swot analysis

#### Streanth:

   ###### Benifit and automaticaly sense the entry and exit of the object/vehicle.
   ###### Low cost.


#### Weakness

   ###### No warranty on sensors


#### Opportunities

   ###### Providing saftey and protection in the construction feild etc
   ###### Used in developed cities

#### Threat

   ###### Damage may occur if the sensor does not sense

  
  
  
# Block Diagram

![block Diagram](https://user-images.githubusercontent.com/98813874/157278700-2fde64ab-8566-4d46-a4af-76d6852a96b1.PNG)


# Flow chart
![flowchart ](https://user-images.githubusercontent.com/98813874/157279776-c6c355e9-0064-450f-b5a3-d90f3c208966.PNG)



# Behavioural Diagram
![Behavioural diagram](https://user-images.githubusercontent.com/98813874/157278780-4e4ead81-5dd4-450b-8b69-ded570761e77.PNG)








# Components

- Power supply: A power supply is an electrical device that supplies electric power to an electrical load. The main purpose of a power supply is to convert electric current from a source to the correct voltage, current, and frequency to power the load.

- Microcontroller: Atmega16: ATMEGA16 microcontroller is one of the popular controllers in AVR series. With its features and purchase cost, it became one of favorite controller for both hobbyists and engineers. ATMEGA16 programming is similar to any other AVR controller.  It is particularly a clone to ATMEGA32 except for the memory.

- LED: LED is a semiconductor light source that emits light when current flows through it. Electrons in the semiconductor recombine with electron holes, releasing energy in the form of photons. The color of the light (corresponding to the energy of the photons) is determined by the energy required for electrons to cross the band gap of the semiconducto

- IR sensor : An infrared (IR) sensor is an electronic device that measures and detects infrared radiation in its surrounding environment. Infrared radiation was accidentally discovered by an astronomer named William Herchel in 1800. While measuring the temperature of each color of light (separated by a prism), he noticed that the temperature just beyond the red light was highest.



- DC Motor : A DC motor is any of a class of rotary electrical motors that converts direct current electrical energy into mechanical energy. The most common types rely on the forces produced by magnetic fields. Nearly all types of DC motors have some internal mechanism, either electromechanical or electronic, to periodically change the direction of current in part of the motor.


- Resistor , Voltage source
  
  
  
  
  # Circuit diagram 

![Circuit_diagram](https://user-images.githubusercontent.com/98813874/157296692-ac8ac280-ea27-4acb-b333-8dda3dd2375d.PNG)



# Test plan and Output





| ID |  Objective | Expected I/P | Expected O/P | Actual O/P | Status |
|----|----------------------|-------------|-------------|-------------|--------------|
|LLR1|Gate closed|0v|Red LED ON|Red LED ON|Pass|
|LLR2|Object/vehicle|5V|Generates interupt|Generates interupt|Pass|
|LLR3|LED blink|Data from controller|LED'S blink according to the signal|LED'S blink according to the signal|Pass|



| ID |  Objective | Expected I/P | Expected O/P | Actual O/P | Status |
|----|----------------------|-------------|-------------|-------------|--------------|
|HLR1|Level sensor|0-5V|Sense the vehicle/object|sense the vehicle/object|Pass|
|HLR2|Gate opens|Data from controller|Motor rotates|motor rotates|Pass|
|HLR3|Gate closes|Data from controller|Motor rotates|Motor rotates|Pass|






# Advanatges




1. Privacy: Privacy is important for every family. Choosing a suitable driveway gate for your property is the best way to protect your and your family’s privacy from the outsiders



2. Safety: Automatic gates provide the convenience of allowing homeowners to control entrance and exit of their home. So you can create boundaries for your pets and children and avoid severe consequences surrounding traffic and other dangers that may create harm.



