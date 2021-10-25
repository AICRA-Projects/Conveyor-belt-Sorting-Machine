# Conveyor-belt
## What is a conveyor belt?
A conveyor belt is the carrying medium of a belt conveyor system, one of the many types of conveyor systems available today. Each conveyor system requires different modules in order to function properly and do the tasks required by the belts.

The different tasks can range depending on the weight required, the speed required, and the throughput of products on the conveyor system.

A conveyor belt system consists of two or more pulleys (referred to as drums), with an endless loop of carrying medium – the conveyor belt – that rotates around them creating a pull effect for the goods it’s carrying. One or more of the pulleys will be powered moving the belt and the material on the belt forward and along the system.

## how to operate
### step 1: Place the object on Conveyor belt surface
### step 2: Detects object by Infared Proximity sensor
### step 3: 5 degree of freedom robotic arm will pick from Coveryor belt and place the object in box

## Sorting 
Sorting objects, matching shapes, colours and then pictures helps build visual perception and thinking skills. Conveyor belt can generally sort into colours with the help of robotic arm which place the color object in plastic box while black box get rejected from the sensor.

## Setup diagram 
![Conveyor Belt Sorting Machine](https://user-images.githubusercontent.com/42414598/137738074-e945771d-6019-403e-9433-66fc1b97b39f.png)

## Circuit Diagram 
![Conveyor Belt Sorting Machine Circuit Diagram](https://user-images.githubusercontent.com/42414598/138706925-f5061e9b-e0aa-4412-b4a0-9c5d096544e7.jpg)


## Conveyor belt code
* Step_1 : Setup the robotic arm with arduino connection from digital pins and gripper will connect with Motor driver 
* Step_2 : Connect the proximity sensor with arduino analog pins and read the analog values
* Step_3 : Conveyor belt works with help of stepper motor which can be controlled by steps per seconds in arduino programming 
* Step_4 : Connect the robotic arm and conveyor belt together with arduino 
* Step_5 : Run your code and place the cube in Conveyor whole system will sort out the black and color object 

## Conclusion 
Models a robot arm with 5 degrees of freedom and a gripper, along with two conveyor belts. The robot transfers parts from one conveyor belt to the other. One conveyor belt brings the parts to the robot arm, and the other belt transports the parts away from the robot arm. The model includes electrical actuation, supervisory logic, and optimization of end effector trajectory.
