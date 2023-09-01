
HERIOT - WATT UNIVERSITY

School of Engineering & Physical Sciences

Mechanical Engineering Laboratory

Arduino Experiments

Pulse Width Modulation: RGB LED Control


## **Introduction**

One of the tasks of Arduino is to control devices such as motors and light sources. Often this just involves switching these devices on an off, but in some instances they are used to control the speed of a motor or the intensity of a light source.

If we take controlling the speed of a motor as an example, then a commonly used method of controlling the motor speed involves keeping the motor continuously on, but varying the power that drives it. Arduino does not have a true analogue voltage output, however by adding a digital-to-analogue converter we can then then use the analogue signal to vary the power.

An alternative mode of controlling the speed of the motor is Pulse Width Modulation. Essentially it works by only involving “on” and “off” states. PWM varies the amount of time that the blinking pin or a motor spends HIGH vs. the time it spends LOW. If it spends most of its time LOW, the LED will look dim. Because the pin is blinking much faster than your eye can detect, the Arduino creates the illusion of a “true” analogue output. 

The ratio of “on” time to the total time is called the duty cycle, and variation of the duty cycle can be used to control the motor speed.

<p align="center">
  <img src="/3_RGB_LED/PulseWidthModulation.png" width="400" title="Pulse Width Modulation">
  
</p>

<p align="center">
Figure 1: Pulse Width Modulation
</p>
 


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
### **Required Components**


| Number            |    Components   | 
| ------------------| --------------- |
|  [Arduino UNO](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino.aspx)      | 1               |
|  [LED RGB](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/LED.aspx)          | 1               |
|  [330Ω resistor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Resistors.aspx)    | 3               |
|  [Breadboard](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Breadboard.aspx)     | 1               |
|  [Potentiometer](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Potentiometer.aspx)    | 1               |
|  [Jumper cables](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Wire.aspx)    |                 |


#
## **Procedure**

In this experiment, PWM will be used to control the light output of a multicolour LED.

PWM can be achieved with Arduino using the “analogWrite” command. 


## **Task 1: RGB LED Color Changer with Arduino**

**Objective:**

The goal of this task is to create an Arduino sketch for controlling an RGB LED, allowing it to display various colors. The code should initialize the necessary pins, cycle through different colors, and provide an understanding of how to manipulate RGB LED colors using PWM (Pulse Width Modulation).

**Materials Needed:**

| Number            |    Components   | 
| ------------------| --------------- |
|  [Arduino UNO](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino.aspx)      | 1               |
|  [LED RGB](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/LED.aspx)          | 1               |
|  [330Ω resistor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Resistors.aspx)    | 3               |
|  [Breadboard](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Breadboard.aspx)     | 1               |
|  [Jumper cables](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Wire.aspx)    |                 |

**Circuit Diagram:**


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
     
4. Verify and Upload the code to Arduino board

**Additional Considerations:**

- Test the code to ensure that it correctly transitions between the specified colors and that the RGB LED responds as expected.


##### *The code for this task can be found [changeColours.ino](https://github.com/HWSHam1/Arduino_SensorsAndMotion/blob/main/3_RGB_LED/rgb_led/Task1_ChangeColours.ino)

## **Task 2**

Write a program to slowly fade the red LED in and out, you may find the program “fading” under File/Examples/03.Analog useful.


## **Task 3**

Now modify the program to fade each LED sequentially (i.e. fade red in, red out, green in, green out)

<p align="center">
  <img src="/3_RGB_LED/RGB_LED_CircuitDiagram.png" width="400">
  
</p>
<p align="center">
Figure 4: Circuit for Tasks 1,2,3
</p>


## **Task 4**

Once the program is working correctly for the previous step, make sure the potentiometer middle pin is connected to A0 on the Arduino and modify the program to change the speed of the fading depending on the potentiometer position. This can be done by reading the voltage at A0 and changing the value added to “fadeValue” each time (you may use the “ReadAnalogVoltage” example program to remind yourself on how to do this).

<p align="center">
  <img src="/3_RGB_LED/CircuitDiagram.png" width="400">
  
</p>
<p align="center">
Figure 5: Circuit for Task 4
</p>


