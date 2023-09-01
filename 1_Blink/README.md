HERIOT - WATT UNIVERSITY

School of Engineering & Physical Sciences

Mechanical Engineering Laboratory

Arduino Experiments

##

# Task1: Blink

**Objective:**

The objective of this task is to create an Arduino sketch that blinks an LED connected to pin 13 with a specific on-off interval. 

**Components Required:**


| Components            | Quantity | 
| ------------------| --------------- |
|  [Arduino UNO](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino.aspx)      | 1     |
|  [LED](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/LED.aspx)        | 1    |
|  [330Ω resistor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Resistors.aspx)    | 1     |
|  [Breadboard](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Breadboard.aspx)     | 1      |
|  [Jumper cables](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Wire.aspx)    |          |


**Circuit**

Now that we know the components we can set up our Arduino as shown below.

![CircuitDiagramTask1](/1_Blink/Images/CircuitDiagramTask1.png)


**Task Description:**

You are responsible for developing an Arduino sketch (code) that accomplishes the following tasks:

1. Initialize an integer variable named `LEDpin` and assign the value 13 to it. This variable will represent the Arduino pin connected to the LED.

2. In the `setup()` method:
   - Set the `LEDpin` as an output pin using the `pinMode()` function.

3. In the `loop()` method:
   - Turn the LED on by setting the `LEDpin` to HIGH using the `digitalWrite()` function.
   - Wait for 1000 milliseconds (1 second) using the `delay()` function.
   - Turn the LED off by setting the `LEDpin` to LOW.
   - Wait for another 1000 milliseconds.

4. The code in the `loop()` method should repeat the LED blinking process indefinitely.

**Additional Considerations:**

- Verify that the LED is correctly connected to pin 13 on the Arduino board with the necessary current-limiting resistor.
- Test the code on an Arduino board to verify that the LED blinks at the specified interval (1 second on, 1 second off).

#### *The code for this task can be found [here](https://github.com/HWSHam1/Arduino_SensorsAndMotion/blob/main/1_Blink/blink.ino)*
