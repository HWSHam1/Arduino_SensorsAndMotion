EPS Mechanical Engineering

HERIOT - WATT UNIVERSITY

School of Engineering & Physical Sciences

Mechanical Engineering Laboratory

Arduino Experiments

Pulse Width Modulation: DC Motor Control

## 

## Introduction:

Motors are used for numerous things in our daily lives, and the Arduino can control them. Here we'll use pulse-width modulation (PWM) to vary the speed of a motor.

## PWM

Microcontrollers like the Arduino are often used to control devices such as motors and light sources. Often this just involves switching these devices on and off, but in some instances they are used to control the speed of a motor or the intensity of a light source.

If we take controlling the speed of a motor as an example, then a commonly used method of controlling the motor speed involves keeping the motor continuously on, but varying the power that drives it. Arduino does not have a true analogue voltage output, however by adding a digital-to-analogue converter we can then then use the analogue signal to vary the power.

An alternative mode of controlling the speed of the motor is Pulse Width Modulation (PWM). Essentially it works by only involving "on" and "off" states. PWM varies the amount of time that the blinking pin or a motor spends HIGH vs. the time it spends LOW. If it spends most of its time LOW, the LED will look dim. Because the pin is blinking much faster than your eye can detect, the Arduino creates the illusion of a "true" analogue output.

The ratio of "on" time to the total time is called the duty cycle, and variation of the duty cycle can be used to control the motor speed.

## 
<p align="center">
  <img src="/4_DC_Motor/Images/PWM.png" width="400" title="Pulse Width Modulation">
  
</p>

<p align="center">
Figure 1: Pulse Width Modulation
</p>

## Procedure:

The Arduino pins are strong enough to light small LEDs (up to 40 milliAmps), but they're not strong enough to run motors and other power-hungry parts. (This motor needs 50-100mA). Because the motor needs more current than an Arduino pin can provide, we'll use a transistor to do the heavy lifting. A transistor is a solid-state switch. When we give it a small amount of current, it can switch a much larger current.

You can turn a transistor on and off using the digitalWrite() function, but you can also use the analogWrite() function to vary the speed of the motor. The analogWrite() function pulses a pin, varying the width of the pulse from 0% to 100%. This is the same technique used in the RGB LED example for "Pulse-Width Modulation".

One thing to keep in mind is that when you lower the speed of a motor using PWM, you're also reducing the torque (strength) of the motor. For PWM values below 50 or so, the motor won't have enough torque to start spinning. It will start spinning when you raise the speed a bit.

## Flyback diode

When the motor is spinning and suddenly turned off, the magnetic field inside it collapses, generating a voltage spike. This can damage the transistor. To prevent this, we use a "flyback diode", which diverts the voltage spike away from the transistor.

Connect the side of the diode with the band (cathode) to 5V. Connect the other side of the diode (anode) to the black wire on the motor.

##

## Circuit Diagram for Task 1 and Task 2:

<p align="center">
  <img src="/4_DC_Motor/Images/Circuit Diagram 1.png" width="400" >
  
</p>

<p align="center">
Figure 2: Circuit for Tasks 1 and 2
</p>

##

## Task 1:

**Objective:**

Develop an Arduino sketch to control a motor using a simple on-off cycle with adjustable on and off times. The motor will be connected to a specified pin on the Arduino board and will turn on for a defined duration (onTime) before turning off for another defined duration (offTime). This task aims to create a basic motor control system that can be adapted for various applications.

**Components Required**

| Components            | Quantity | 
| ------------------| --------------- |
|  [Arduino UNO](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino.aspx)      | 1     |
|  [Transistor (P2N2222A or similar)](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Transistor.aspx)         | 1    |
|  [Diode (1N4148 or similar)](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Diode.aspx)         | 1    |
|  [DC Motor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Motors.aspx)        | 1               |
|  [330Ω resistor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Resistors.aspx)    | 1     |
|  [Breadboard](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Breadboard.aspx)     | 1      |
|  [Jumper cables](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Wire.aspx)    |          |


**Task Description:**

You are responsible for creating an Arduino sketch (code) that accomplishes the following tasks:

1. Define and set the motorPin as an output. This pin will be used to control the motor.

2. Initialize the serial communication at a baud rate of 9600 for debugging and monitoring purposes.

3. Create a function named `motorOnThenOff` that takes two integer parameters: `onTime` (the duration the motor should stay on) and `offTime` (the duration the motor should stay off).

4. In the `motorOnThenOff` function:
   - Turn the motor on by setting the `motorPin` to HIGH.
   - Delay for `onTime` milliseconds to keep the motor on.
   - Turn the motor off by setting the `motorPin` to LOW.
   - Delay for `offTime` milliseconds to keep the motor off.

5. In the `loop` function, call the `motorOnThenOff` function with specific values (e.g., 3000 milliseconds on, 3000 milliseconds off). This creates a continuous on-off cycle for the motor.

6. Ensure that the code is well-documented, with comments explaining the purpose of each section and significant lines of code.

**Additional Considerations:**

- Ensure that the code is well-documented, with comments explaining the purpose of each section and significant lines of code.
- Pay attention to safety precautions when working with motors, including appropriate power supply voltage and current, and proper motor driver setup.
- Be cautious when choosing the motorPin and wiring to avoid damaging the Arduino.

##### *The code for this task can be found at [Task1_motorOnOff.ino](https://github.com/HWSHam1/Arduino_SensorsAndMotion/blob/main/4_DC_Motor/dc_motor_control/Task1_motorOnOff.ino)*

##

## Task 2:

**Objective:**

Design an Arduino sketch that controls the acceleration and deceleration of a motor connected to a specific pin. The motor should smoothly accelerate from zero to full speed and then decelerate back to zero, with control over the acceleration rate.

**Components Required:**

| Components            | Quantity | 
| ------------------| --------------- |
|  [Arduino UNO](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino.aspx)      | 1     |
|  [Transistor (P2N2222A or similar)](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Transistor.aspx)         | 1    |
|  [Diode (1N4148 or similar)](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Diode.aspx)         | 1    |
|  [DC Motor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Motors.aspx)        | 1               |
|  [330Ω resistor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Resistors.aspx)    | 1     |
|  [Breadboard](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Breadboard.aspx)     | 1      |
|  [Jumper cables](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Wire.aspx)    |          |


**Task Description:**

Your task is to create an Arduino sketch (code) that accomplishes the following:

1. Define a constant integer `motorPin` to specify the pin to which the motor is connected (output).

2. In the `setup()` function, set up the serial port with a baud rate of 9600 for potential debugging and configure the `motorPin` as an output.

3. In the `loop()` function, repeatedly call the `motorAcceleration()` function with a specific delay time (controlled by an integer) to manage the motor's acceleration and deceleration.

4. Implement the `motorAcceleration(int delayTime)` function:

   - Inside this function, use a `for` loop to increment the motor's speed gradually from 0 to 255 (assuming a PWM-controlled motor).
   
   - For each step in the loop, use `analogWrite()` to set the motor speed and `delay()` to introduce a delay between speed steps.

   - After reaching full speed (255), create another `for` loop to decrement the speed gradually from 255 back to 0 to decelerate the motor smoothly.

5. Test and calibrate the `delayTime` parameter to control the rate of acceleration and deceleration according to your motor's characteristics.


##### *The code for this task can be found at [Task2_motorAcceleration.ino](https://github.com/HWSHam1/Arduino_SensorsAndMotion/blob/main/4_DC_Motor/dc_motor_control/Task2_motorAcceleration.ino)*


##

## Task 3:

**Objective:**

Create an Arduino sketch that allows you to read the position of a potentiometer and based on this adjust the speed of a motor. The potentiometer input will determine the motor speed, and the motor's speed will be adjusted based on the potentiometer's position.


**Components Required:**

| Number            |    Components   | 
| ------------------| --------------- |
|  [Arduino UNO](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino.aspx)      | 1               |
|  [Potentiometer](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Potentiometer.aspx)    | 1               |
|  [Transistor (P2N2222A or similar)](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Transistor.aspx)         | 1               |
|  [Diode (1N4148 or similar)](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Diode.aspx)         | 1               |
|  [DC Motor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Motors.aspx)        | 1               |
|  [330Ω resistor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Resistors.aspx)    | 3               |
|  [Breadboard](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Breadboard.aspx)     | 1               |
|  [Jumper cables](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Wire.aspx)    |                 |


**Circuit Diagram:**

<p align="center">
  <img src="/4_DC_Motor/Images/Circuit Diagram 2.png" width="400" >
  
</p>

<p align="center">
Figure 3: Circuit for Task 3
</p>


**Task Description:**

You are tasked with creating an Arduino sketch (code) that accomplishes the following tasks:

1. Define two constants: `motorPin` (output pin connected to the motor driver) and `potPin` (input pin connected to the potentiometer).

2. In the `setup()` function:
   - Initialize the serial communication with a baud rate of 9600.
   - Set `motorPin` as an OUTPUT pin.
   - Set `potPin` as an INPUT pin.

3. Create a `loop()` function that:
   - Calls the `potentiometerControl()` function.

4. Implement a function named `potentiometerControl()` that:
   - Reads the analog value from the `potPin` using `analogRead()` and stores it in the variable `val`.
   - Calculates the `speed` of the motor based on the potentiometer reading. The formula used is:
     ```
     speed = val / highestValueFromPotentiometer * 255;

     ```

     Here, `highestValueFromPotentiometer` is a constant representing the highest expected range value read from the potentiometer.
   - Sets the motor speed using `analogWrite()` to the `motorPin` based on the calculated `speed`.

5. Ensure that the code is well-documented with comments explaining the purpose of each section and significant lines of code.

6. Upload the code to the Arduino board.


##### *The code for this task can be found at [Task3_potentiometerControl.ino](https://github.com/HWSHam1/Arduino_SensorsAndMotion/blob/main/4_DC_Motor/dc_motor_control/Task3_potentiometerControl.ino)*


