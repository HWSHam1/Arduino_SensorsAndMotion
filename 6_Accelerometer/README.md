EPS Mechanical Engineering

HERIOT - WATT UNIVERSITY

School of Engineering & Physical Sciences

Mechanical Engineering Laboratory

Arduino Experiments

Accelerometer

## Introduction:

The Arduino is a powerful and adaptable microcontroller, but even it has its limitations. Fortunately, there are multiple addons, such as sensors, adapters, breakout boards and shields which can enhance or add features on top of the Arduino.

In this tutorial we will use an accelerometer. Accelerometers are devices that measure acceleration. They are useful for sensing vibrations in systems or for position and orientation measurement.

There are several different types of accelerometers. In this tutorial we will be using a 3-axis accelerometer.

![Accelerometer](https://github.com/HWSHam1/Arduino_SensorsAndMotion/blob/main/6_Accelerometer/Images/Accelerometer.png)

_Figure 1: An Adafruit MMA8451 accelerometer with the X, Y and Z measurement axes labelled._

## Required Components:

- Arduino UNO
- Adafruit MMA8451 Accelerometer
- Breadboard
- Jumper cables

## Tasks:

- Build the circuit.
- Install accelerometer libraries
- Use the example code to measure acceleration.
- Estimate velocity and displacement.

## Build the circuit:

Assemble the circuit as shown bellow

- Connect **Vin** to the power supply, **3.3V**
- Connect **GND** to common **GND**
- Connect the **SCL** pin to analogue input **A5**
- Connect the **SDA** pin to analogue input **A4**

![Circuit Diagram](https://github.com/HWSHam1/Arduino_SensorsAndMotion/blob/main/6_Accelerometer/Images/CircuitDiagram_Accelerometer.png)

_Figure 2: Accelerometer Circuit_

## Install accelerometer libraries:

For this sensor you will need to import libraries. A library is a set of code that was previously written that can be called upon when building your own code. In programming, the use of libraries saves a vast amount of time. They reduce the time spent programming an application by providing ready-made code to access a particular function.

If the "Adafruit MMA8451 library" is not in the installed version of the Arduino IDE, then instructions to install it can be found at [InstallingLibraries.md](https://github.com/HWSHam1/Arduino_SensorsAndMotion/blob/main/6_Accelerometer/InstallingLibraries.md)

## Estimate velocity and displacement:

Your task is to measure the perimeter of a computer keyboard using the accelerometer. To do this,

1. Set up the Arduino circuit with the accelerometer as shown in Figure 2.
2. Download the example code (accelerometer.io) to the Arduino.
3. Begin recording data – you should see this appear on the serial monitor.
4. Move the accelerometer around the computer keyboard.
5. Copy and paste the accelerometer data from the serial monitor to the Excel file ("Accelerometer Example.xlsx")

What are the dimensions of the keyboard measured with the accelerometer? Measure the keyboard using a ruler or measuring tape. Compare the results – are they different? Why do you think this is?

Accelerometers are widely used in gesture controllers and video gaming console controls to record user inputs and track the location of objects. Why do you think they are used in these applications? How could their accuracy be improved?

## Further work:

- **How does temperature vary in a room?** Create a circuit that measures both acceleration and temperature. Record the data and graph the temperature at different locations.
- **Can the accelerometer be used as a damage warning trigger?** Many mobile devices have accelerometers built-in to give warning of sudden falls. If a high acceleration is detected, the device is switched into a safe mode or hard disks are parked to prevent damage. Create a circuit that reads acceleration, checks if it is greater than a preset threshold, then lights up an LED if acceleration is too high.

##### *The code for this task can be found [here](https://github.com/HWSHam1/Arduino_SensorsAndMotion/blob/main/6_Accelerometer/accelerometer.ino)*
