HERIOT - WATT UNIVERSITY

School of Engineering & Physical Sciences

Mechanical Engineering Laboratory

Arduino Experiments

# Task1: Blink

One of the classic but most important projects for novices is the "blink" project, where you will be connecting a light-emitting diode (an LED) to the Arduino, and programming it to turn off and on.

#
### **Required Components**

- [Arduino UNO](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino.aspx)
- [LED](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/LED.aspx)
- [330Ω resistor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Resistors.aspx)
- [Breadboard](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Breadboard.aspx)
- [Jumper cables](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Wire.aspx)

#
### **Circuit**

Now that we know the components we can set up our Arduino as shown below.

![CircuitDiagramTask1](/1_Blink/CircuitDiagramTask1.png)

#
### **Programming**

Open up the [Arduino IDE](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino-IDE-basics.aspx) on your computer.

Open File -> Example -> Basic -> Blink

![FilePath](/1_Blink/FilePath.jpg)

### **Code explained**

The code has mainly 2 sections: void setup and void loop.
Before starting to write these functions, we need to initialize all the variables.
Here we need to initialize a variable for assigning the pin number, which is connected to the LED.
<img src="/1_Blink/InitializingVariable.png" width="900"/>

In the void setup assign LEDpin as OUTPUT.

<img src="/1_Blink/SetupFunction.png" width="500"/>

The void loop function can be used to turn on and turn off LED. This can be visible by putting certain delay between ON and OFF actions. LED can be turned ON and OFF or HIGH and LOW using digital write function. Turning the LED to HIGH, supplies 5V to the LED, and while turning it OFF, it comes back to 0V.

<img src="/1_Blink/LoopFunction.png" width="600"/>

#
### **Verify and Upload**

Connect the board using its cable to the computer.

In Arduino IDE, select correct board and port.

Now, using verify button check for any errors in the program, and using upload button upload the code to the Arduino board.

Now we can see the Built-in LED of the board blinking in fixed intervals.

Try to experiment with increasing, decreasing or removing the delay.
