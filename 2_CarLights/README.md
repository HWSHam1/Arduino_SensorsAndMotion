HERIOT - WATT UNIVERSITY

School of Engineering & Physical Sciences

Mechanical Engineering Laboratory

Arduino Experiments

# Task2: Car Lights

This task can be divided into 4 sub tasks.

## **Subtask 1**

First consider the scenario of car door opening and closing, and based on that the lights inside the car will ON and OFF. Here instead of door, we are using a push button. The door open will correspond to push button pressed and car door closed will correspond to push button released. Instead of the lights in the car, we will use LED. You can use Blue LED for the first 3 subtasks.

#
#### **Required Components**

- [Arduino UNO](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino.aspx)
- [LED](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/LED.aspx)
- [330Ω resistor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Resistors.aspx)
- [Pushbutton](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Push-button.aspx))
- [Breadboard](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Breadboard.aspx)
- [Jumper cables](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Wire.aspx)

#
#### **Circuit**

Now that we know the components we can set up our Arduino as shown below.


#
#### **Programming**

Open up the [Arduino IDE](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino-IDE-basics.aspx) on your computer.


#### **Code explained**

The code has 2 sections: void setup and void loop.

#
#### **Verify and Upload**

Connect the board using its cable to the computer.

In Arduino IDE, select correct board and port.

Now, using verify button check for any errors in the program, and using upload button upload the code to the Arduino board.

Now we can see the Built-in LED of the board blinking in fixed intervals.

Try to experiment with increasing, decreasing or removing the delay.

## **Subtask 2**

Now consider the situation that the light will turn on when door is opened, but when the door is closed, it will turn off only after 2 seconds.

#
#### **Required Components**

- [Arduino UNO](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino.aspx)
- [LED](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/LED.aspx)
- [330Ω resistor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Resistors.aspx)
- [Breadboard](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Breadboard.aspx)
- [Jumper cables](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Wire.aspx)


#
#### **Circuit**

Now that we know the components, we can set up our Arduino as shown below.

![](RackMultipart20230816-1-nchyy_html_9b88eefc3cb155b3.png)

#
#### **Programming**

Open up the [Arduino IDE](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino-IDE-basics.aspx) on your computer.


#### **Code explained**

The code has 2 sections: void setup and void loop.


## **Subtask 3**

Now consider the situation of 2 doors. If any one of the door is open, the light will be ON. While both the doors are closed, the light will be OFF.

#
#### **Required Components**

- [Arduino UNO](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino.aspx)
- [LED](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/LED.aspx)
- [330Ω resistor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Resistors.aspx)
- [Breadboard](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Breadboard.aspx)
- [Jumper cables](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Wire.aspx)


#
#### **Circuit**

Now that we know the components we can set up our Arduino as shown below.

#
#### **Programming**

Open up the [Arduino IDE](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino-IDE-basics.aspx) on your computer.


#### **Code explained**

The code has 2 sections: void setup and void loop.


## **Subtask 4**

Now consider the situation of 2 doors and trunk. To make it little bit more complicated, in this case we will 3 LEDs. If doors are only open (either 1 door or both doors), Red light will be ON. If trunk is only open, Blue light will be ON. If trunk and at least one of doors is open, Green light will be ON. While both the doors and the trunk are closed, the light will be OFF.

#
#### **Required Components**

- [Arduino UNO](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino.aspx)
- [LED](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/LED.aspx)
- [330Ω resistor](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Resistors.aspx)
- [Breadboard](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Breadboard.aspx)
- [Jumper cables](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Wire.aspx)


#
#### **Circuit**

Now that we know the components we can set up our Arduino as shown below.


#
#### **Programming**

Open up the [Arduino IDE](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino-IDE-basics.aspx) on your computer.


#### **Code explained**

The code has 2 sections: void setup and void loop.
