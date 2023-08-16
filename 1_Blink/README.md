HERIOT - WATT UNIVERSITY
School of Engineering & Physical Sciences
Mechanical Engineering Laboratory
Arduino Experiments

# Introduction: Blink

One of the classic but most important projects for novices is the "blink" project, where you will be connecting a light-emitting diode (an LED) to the Arduino, and programming it to turn off and on.

#
# **Required Components**

- [Arduino UNO](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino.aspx)
- [LED](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/LED.aspx)
- [330Ω resistor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Resistors.aspx)
- [Breadboard](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Breadboard.aspx)
- [Jumper cables](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Wire.aspx)

#
# **Circuit**

Now that we know the components we can set up our Arduino as shown below.

![CircuitDiagram Task1](CircuitDiagram Task1.jpg)

#
# **Programming**

Open up the [Arduino IDE](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino-IDE-basics.aspx) on your computer.

Open File -> Example -> Basic -> Blink

![](RackMultipart20230816-1-2gkrdo_html_c99b430573eb98c9.png)

## **Code explained**

The code has 2 sections: void setup and void loop.

In the void setup initialize the LED\_BUILTIN pin as OUTPUT.

![](RackMultipart20230816-1-2gkrdo_html_20a5cb5bcb7b2ba6.png)

The void loop function can be used to turn on and turn off built in LED of Arduino. This can be visible by putting certain delay between ON and OFF actions. Built in LED can be turned ON and OFF or HIGH and LOW using digital write function.

![](RackMultipart20230816-1-2gkrdo_html_c520f64c60d8db4d.png)

#
# **Verify and Upload**

Connect the board using its cable to the computer.

In Arduino IDE, select correct board and port.

Now, using verify button check for any errors in the program, and using upload button upload the code to the Arduino board.

Now we can see the Built-in LED of the board blinking in fixed intervals.

Try to experiment with increasing, decreasing or removing the delay.