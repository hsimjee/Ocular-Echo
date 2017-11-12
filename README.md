

# Project Ocular Echo
This is our entry for Cutie Hack IV at University of California Riverside. 
It is an Arduino-based detection system to assist the visually impaired. 

Normally, canes can be used to assist in navigation of the visually impaired.
While this works for obstacles below waist level, anything above waist level becomes harder to detect.
In countries that lack accommodations for the visually impaired, canes can only do so much. 
Collisions with parked vehicles would occur as the user’s cane would go underneath a car or bus, giving the user false information and causing collision.

For our demo, we have the device split into two separate systems. The original idea was to have one unit power both sensors, but due to limited options in regards to parts, we created two separate systems that can be 
With the proper modules, we could have more accurate sensors that would provide feedback on environmental obstacles. 

## Design

The project is made up of:
* Arduino
* 2 motors
* 2 ultrasonic sensors
* 1 speaker

The Arduino handles the input from the ultrasonic sensors. It detects objects in a 30-degree cone. Once it detects something, the motor pulses to provide haptic feedback. 
The speaker begins to emit a sound that increases in repetition, giving the user a sense of how far the object is from the user. 
Our design is rudimentary and based on a collection of sub-optimal parts, but with refinement, we can improve the product to be lighter and more user-friendly. We could hopefully shrink the number of Arduinos to one. 

## Problems Encountered
Power limitation were the largest issue we ran into. We could power a singular system on just USB power, but to power two instances, we needed more power.

We ended up changing the design to use two Arduinos for left and right legs/arms.

We kept having an issue where the unit would get locked in a loop after operating for a short period. 

We also wanted to keep the form factor smaller so that it can remain portable, which was hard to do with our level of experience. 

We had to compromise and use what we had access to. If we had smaller breadboards, we could have made the devices smaller. We also needed to draw power from a laptop as we did not have another battery pack.

## Future Ideas
We could sell the setup as a kit in areas that do not have the proper infrastructure to assist the visually impaired. It would contain a rechargeable battery bank to power the unit, the microcontroller, sensors, motors, and wires. The battery bank and controller can attach to a belt or be placed in a pocket. The motors and sensors would be attached to the controller via wires. They would attach to the user with a Velcro band. 

We could include a dial that allows the user to adjust the range of the sensor so that when they are in scenarios where they need more or less detection range, they can change it on the fly. Other dials can be used to adjust the volume for the speaker and the vibration intensity of the motors. 

It might be possible to create a brand of clothes that have this technology built in, such as shoes or headgear.

## Group Members
* **Huzaifah Simjee** 
* **Steven Fan**
* **Mark Zemlany** -  mzeml001@ucr.edu

## Acknowledgements

Thank you to the mentors who helped us out!


