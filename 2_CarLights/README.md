HERIOT - WATT UNIVERSITY

School of Engineering & Physical Sciences

Mechanical Engineering Laboratory

Arduino Experiments

# Car Lights

This task can be divided into 4 sub tasks.

-----------------------------------------------------

##

## **Task 1: Simulating Car Door with Interior LED Control**

**Objective:**
The objective of this task is to create an Arduino project that simulates the opening and closing of a car door using a push button. Based on the status of the push button (pressed or released), control the illumination of an interior LED, representing the car's interior light. 

**Materials Needed:**


| Components            |    Quantity   | 
| ------------------| --------------- |
|  [Arduino UNO](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino.aspx)      | 1               |
|  [LED (yellow)](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/LED.aspx)          | 1               |
|  [330Ω resistor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Resistors.aspx)    | 1               |
|  [Push Button](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Push-button.aspx)  | 1       |
|  [Breadboard](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Breadboard.aspx)     | 1               |
|  [Jumper cables](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Wire.aspx)    |                 |




1. Arduino board (e.g., Arduino Uno)
2. LED (color of your choice, e.g., yellow)
3. Push button (momentary)
4. Resistor (220Ω)
5. Jumper wires
6. Breadboard (optional but recommended for easy prototyping)
7. USB cable for power and programming

**Task Description:**

1. **Circuit Diagram:**


  
2. **Arduino Code:**
   - In the `setup()` function, initialize the digital pin to which the push button and LED are connected as INPUT (for the button) and OUTPUT (for the LED).
   - In the `loop()` function:
     - Read the state of the push button using `digitalRead()`.
     - If the push button is pressed (LOW), turn on the LED by setting the LED pin to HIGH.
     - If the push button is released (HIGH), turn off the LED by setting the LED pin to LOW.
   - Upload the code to your Arduino.



##

## **Task 2: Simulating Car Door with Interior LED Control with Delayed Off**


**Objective:**
The objective of this task is to enhance the previous Arduino project that simulates the opening and closing of a car door using a push button. In this improved version, the interior LED (representing the car's interior light) will respond to the push button by turning on when the button is pressed (door open) and turning off with a delay when the button is released (door closed).


**Materials Needed:**

- [Arduino UNO](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino.aspx)
- [LED](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/LED.aspx)
- [330Ω resistor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Resistors.aspx)
- [Pushbutton](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Push-button.aspx))
- [Breadboard](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Breadboard.aspx)
- [Jumper cables](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Wire.aspx)

**Task Description:**

1. **Circuit Diagram:**

   Use the same circuit as in Task1.

3. **Arduino Code:**
   - In the `setup()` function, initialize the digital pin to which the push button and LED are connected as INPUT (for the button) and OUTPUT (for the LED).
   - In the `loop()` function:
     - Read the state of the push button using `digitalRead()`.
     - If the push button is pressed (LOW), turn on the LED by setting the LED pin to HIGH.
     - If the push button is released (HIGH), turn off the LED with a delay of a specified duration (e.g., 2 seconds) before setting the LED pin to LOW.
   - Upload the code to your Arduino board.



















##

## **Task 3: Car Security Status Indicator with Arduino**


**Objective:**
The objective of this task is to create an Arduino project that monitors the status of car doors and the trunk using push buttons and controls three LEDs to indicate the vehicle's security status. The LEDs will display different colors based on the combination of open/closed doors and trunk.

**Materials Needed:**
1. Arduino board (e.g., Arduino Uno)
2. Three LEDs (green, yellow, red)
3. Three push buttons (for doors and trunk)
4. Resistors (220Ω for LEDs, optional pull-down resistors for buttons)
5. Jumper wires
6. Breadboard (optional but recommended for easy prototyping)
7. USB cable for power and programming

**Task Description:**

**1. Circuit Diagram:**
   - Connect each LED's anode (longer lead) to a digital pin on the Arduino board (e.g., green LED to Pin 10, yellow LED to Pin 9, red LED to Pin 8).
   - Connect each LED's cathode (shorter lead) to a 220Ω resistor and connect the other end of the resistor to the Arduino's ground (GND) pin.
   - Connect one terminal of each push button to a digital pin on the Arduino (e.g., door button 1 to Pin 3, door button 2 to Pin 5, trunk button to Pin 7).
   - Connect the other terminal of each push button to the Arduino's ground (GND) pin.
   - Optionally, use pull-down resistors (10kΩ) to connect each button's terminal to the ground to ensure stable readings.

**2. Arduino Code:**
   - Define constants for LED pins and button pins.
   - In the setup() function:
     - Initialize LED pins as OUTPUT.
     - Initialize button pins as INPUT with internal pull-up resistors.
     - Set all LEDs to OFF (LOW) initially.
   - In the loop() function:
     - Read the state of each button to determine the status of doors and trunk.
     - Based on button readings, control the LEDs to indicate the vehicle's security status.
     - Ensure that all LEDs are turned off in any other case.
   - Upload the code to your Arduino.

---------------------------------------------------

##







Now consider the situation of 2 doors and trunk. To make it little bit more complicated, in this case we will 3 LEDs. If doors are only open (either 1 door or both doors), Red light will be ON. If trunk is only open, Blue light will be ON. If trunk and at least one of doors is open, Green light will be ON. While both the doors and the trunk are closed, the light will be OFF.

