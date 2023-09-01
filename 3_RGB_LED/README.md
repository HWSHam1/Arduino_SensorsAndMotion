
HERIOT - WATT UNIVERSITY

School of Engineering & Physical Sciences

Mechanical Engineering Laboratory

Arduino Experiments

Pulse Width Modulation: RGB LED Control

##

## **Introduction**

One of the tasks of Arduino is to control devices such as motors and light sources. Often this just involves switching these devices on an off, but in some instances they are used to control the speed of a motor or the intensity of a light source.

If we take controlling the speed of a motor as an example, then a commonly used method of controlling the motor speed involves keeping the motor continuously on, but varying the power that drives it. Arduino does not have a true analogue voltage output, however by adding a digital-to-analogue converter we can then then use the analogue signal to vary the power.

An alternative mode of controlling the speed of the motor is Pulse Width Modulation. Essentially it works by only involving “on” and “off” states. PWM varies the amount of time that the blinking pin or a motor spends HIGH vs. the time it spends LOW. If it spends most of its time LOW, the LED will look dim. Because the pin is blinking much faster than your eye can detect, the Arduino creates the illusion of a “true” analogue output. 

The ratio of “on” time to the total time is called the duty cycle, and variation of the duty cycle can be used to control the motor speed.

<p align="center">
  <img src="/3_RGB_LED/Images/PulseWidthModulation.png" width="400" title="Pulse Width Modulation">
  
</p>

<p align="center">
Figure 1: Pulse Width Modulation
</p>
 
##

## **RGB**

The RGB colour system constructs visible colours from combinations of Red, Green and Blue colours. The red, green and blue use 8 bits each, which have integer values from 0 to 255. This makes 256*256*256=16777216 possible colours.

In the RGB spectrum the main colours are:

- Red (255,0,0)
- Green (0,255,0)
- Blue (0,0,255)

Changing the three values would give you different colours. Some examples of colours are:

- Yellow (255,255,0)
- Purple (128,0,128)
- Navy (0,0,128)


#
## **Circuit Diagram for Task1, Task2 and Task3**

<p align="center">
  <img src="/3_RGB_LED/Images/RGB_LED_CircuitDiagram.png" width="400">
  
</p>
<p align="center">
Figure 4: Circuit for Tasks 1,2,3
</p>

##

## **Task 1: RGB LED Color Changer with Arduino**

**Objective:**

The goal of this task is to create an Arduino sketch for controlling an RGB LED, allowing it to display various colors. The code should initialize the necessary pins, cycle through different colors, and provide an understanding of how to manipulate RGB LED colors using PWM (Pulse Width Modulation).

**Components Required:**

| Components            |    Quantity   | 
| ------------------| --------------- |
|  [Arduino UNO](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino.aspx)      | 1               |
|  [LED RGB](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/LED.aspx)          | 1               |
|  [330Ω resistor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Resistors.aspx)    | 3               |
|  [Breadboard](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Breadboard.aspx)     | 1               |
|  [Jumper cables](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Wire.aspx)    |                 |


**Task Description:**

You are responsible for creating an Arduino sketch (code) that accomplishes the following tasks:

1. **Initialize Variables:** Initialize variables for the red, green, and blue pin numbers. Assign pin 9, 10, and 11 to these variables, respectively. This should be clearly documented in the code comments.

2. **Setup Function:** In the setup() function, initialize serial communication at a baud rate of 9600 to enable debugging and setup the redPin, greenPin, and bluePin as outputs.

3. **Loop Function:** In the loop() function, repeatedly cycle through different colors by changing the PWM values on the red, green, and blue pins. Here are the color transitions you should implement with a delay of 1 second (1000 milliseconds) between each color:

   - Set the RGB LED to red (255, 0, 0).
   - Set the RGB LED to blue (0, 0, 255).
   - Set the RGB LED to green (0, 255, 0).
   - Set the RGB LED to purple (128, 0, 128).
   - Turn off the RGB LED (0, 0, 0).
     
4. **Verify and Upload:** Verify and upload the code to arduino board.

**Additional Considerations:**

- Test the code to ensure that it correctly transitions between the specified colors and that the RGB LED responds as expected.


##### *The code for this task can be found [changeColours.ino](https://github.com/HWSHam1/Arduino_SensorsAndMotion/blob/main/3_RGB_LED/rgb_led/Task1_ChangeColours.ino)*

##

## **Task 2: RGB LED Fading Effect with Arduino**

**Objective:**

The goal of this task is to create an Arduino sketch for controlling an RGB LED with a fading effect. The code should initialize the necessary pins, smoothly change the brightness of the LED, and provide an understanding of how to create fading effects using PWM (Pulse Width Modulation).


**Components Required:**

| Components            |    Quantity   | 
| ------------------| --------------- |
|  [Arduino UNO](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino.aspx)      | 1               |
|  [LED RGB](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/LED.aspx)          | 1               |
|  [330Ω resistor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Resistors.aspx)    | 3               |
|  [Breadboard](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Breadboard.aspx)     | 1               |
|  [Jumper cables](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Wire.aspx)    |                 |


**Task Description:**

You are responsible for creating an Arduino sketch (code) that accomplishes the following tasks:

1. **Initialize Variables:** Initialize variables for the red, green, and blue pin numbers. Assign pin 11, 10, and 9 to these variables, respectively. This should be clearly documented in the code comments.

2. **Brightness Control:** Declare variables `brightness` and `fadeAmount` to control the brightness of the RGB LED and the rate at which it fades, respectively.

3. **Setup Function:** In the `setup()` function, set the pins defined by redPin, greenPin, and bluePin as outputs. This step prepares the pins to control the RGB LED.

4. **Loop Function:** In the loop() function, use analogWrite() to control the brightness of the redPin. Gradually change the brightness by adding the `fadeAmount` to `brightness`. If `brightness` reaches 0 or 255, reverse the direction of fading by setting `fadeAmount` to its negative value.
   
6. **Verify and Upload:** Verify and Upload the code to Arduino board.


Similarly try to modify the program to fade blue LED and green LED.
##### *The code for this task can be found [changeColours.ino](https://github.com/HWSHam1/Arduino_SensorsAndMotion/blob/main/3_RGB_LED/rgb_led/Task2_FadeRed.ino)*


##

## **Task 3: RGB LED Sequential Fading with Arduino**

**Objective:**
The objective of this task is to create an Arduino sketch that controls an RGB LED, allowing it to sequentially fade through the colors red, blue, and green in a loop. The code should provide smooth transitions between these colors.

**Components Required:**

| Components            |    Quantity   | 
| ------------------| --------------- |
|  [Arduino UNO](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino.aspx)      | 1               |
|  [LED RGB](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/LED.aspx)          | 1               |
|  [330Ω resistor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Resistors.aspx)    | 3               |
|  [Breadboard](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Breadboard.aspx)     | 1               |
|  [Jumper cables](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Wire.aspx)    |                 |


**Task Description:**
You are responsible for creating an Arduino sketch (code) that accomplishes the following tasks:

1. **Initialize Variables:** Initialize variables for the red, blue, and green pin numbers. Assign pin 9, 10, and 11 to these variables, respectively. Additionally, initialize variables for controlling the LED brightness (`brightness`) and the rate of fading (`fadeAmount`). Create a variable `allColourCount` to keep track of the color cycle. These should be clearly documented in the code comments.

2. **Setup Function:** In the setup() function, set the pins defined by `redPin`, `greenPin`, and `bluePin` as outputs to control the RGB LED. Initialize serial communication at a baud rate of 9600 to enable debugging.

3. **Loop Function:** In the loop() function, use conditional statements to control the fading of each color (red, blue, green) sequentially. Each color should fade in and out before transitioning to the next color. Use `analogWrite()` to set the brightness of the respective color pin.

4. **Brightness Adjustment:** Gradually change the brightness (`brightness`) by adding or subtracting the `fadeAmount`. Ensure that the LED transitions smoothly between colors and brightness levels.

5. **Serial Output:** Display the current brightness value on the serial monitor to visualize the fading effect. This can be helpful for debugging and monitoring the transition.

6. **Color Cycle Loop:** After completing the fading cycle through all three colors (red, blue, green), reset the `allColourCount` variable to 0 to repeat the cycle.

7. **Verify and Upload:** Verify and upload the code to arduino board.

##### *The code for this task can be found [changeColours.ino](https://github.com/HWSHam1/Arduino_SensorsAndMotion/blob/main/3_RGB_LED/rgb_led/Task3_FadeAll.ino)*

##

## **Task 4: RGB LED Brightness Control with Potentiometer**

**Objective:**
The objective of this task is to create an Arduino sketch that allows you to control the brightness of an RGB LED using a potentiometer. The code should read the potentiometer value and adjust the LED brightness accordingly.

**Components Required:**


| Components         |   Quantity   | 
| ------------------| --------------- |
|  [Arduino UNO](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino.aspx)      | 1               |
|  [LED RGB](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/LED.aspx)          | 1               |
|  [330Ω resistor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Resistors.aspx)    | 3               |
|  [Breadboard](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Breadboard.aspx)     | 1               |
|  [Potentiometer](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Potentiometer.aspx)    | 1               |
|  [Jumper cables](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Wire.aspx)    |                 |

**Circuit Diagram:**

<p align="center">
  <img src="/3_RGB_LED/Images/CircuitDiagram.png" width="400">
  
</p>
<p align="center">
Figure 5: Circuit for Task 4
</p>

**Task Description:**
You are responsible for creating an Arduino sketch (code) that accomplishes the following tasks:

1. **Initialize Variables:** Initialize variables for the red, green, and blue pin numbers. Assign pin 9, 10, and 11 to these variables, respectively. Additionally, initialize variables for controlling the potentiometer pin (`potPin`), reading its value (`val`), the highest value from the potentiometer (`highestValueFromPotentiometer`), and the LED brightness (`value`). These should be clearly documented in the code comments.

2. **Setup Function:** In the setup() function, set the pins defined by `redPin`, `greenPin`, and `bluePin` as outputs to control the RGB LED. Also, set the `potPin` as an input to read the potentiometer value.

3. **Loop Function:** In the loop() function, read the analog value from the potentiometer using `analogRead(potPin)`. Calculate the `value` for controlling the LED brightness based on the potentiometer value using the formula `value = val/highestValueFromPotentiometer*255` . Use `analogWrite()` to set the brightness of the red LED based on `value`. Ensure that the LED responds smoothly to changes in the potentiometer position.

4. **Verify and Upload:** Verify and upload the code to arduino board.

##### *The code for this task can be found [changeColours.ino](https://github.com/HWSHam1/Arduino_SensorsAndMotion/blob/main/3_RGB_LED/rgb_led/Task4_PotentiometerControl.ino)*







