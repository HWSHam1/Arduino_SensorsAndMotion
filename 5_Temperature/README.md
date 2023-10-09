EPS Mechanical Engineering

HERIOT - WATT UNIVERSITY

School of Engineering & Physical Sciences

Mechanical Engineering Laboratory

Arduino Experiments

Temperature sensing

## Introduction:

Knowing the temperature at a point is a very common task in many fields of engineering, and so for this task we will be carrying out a temperature reading using a simple electronic component known as a **thermistor**. A thermistor is a sensor that outputs a varying analogue voltage that is proportional to the ambient temperature. In this example you will learn how to acquire the sensor data and copy it into a spreadsheet file for analysis.


## Task:

**Objective:**

Write a program to measure the voltage output of the sensor (this will be what you get when reading the sensor), temperature in degrees Celsius, and temperature in degrees Kelvin of your hand when placed on the thermistor. Then verify the result with a thermometer. 
Use the data given from Serial Monitor and plot it in a spreadsheet.

**Components Required:**

| Components            | Quantity | 
| ------------------| --------------- |
|  [Arduino UNO](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Arduino.aspx)      | 1     |
|  [Temperature sensor (TMP36)](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Temperature-Sensor.aspx)         | 1    |
|  [Breadboard](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Breadboard.aspx)     | 1      |
|  [Jumper cables](https://heriotwatt.sharepoint.com/sites/ArduinoTutorials/SitePages/Wire.aspx)    |          |


**Circuit Diagram:**

[Circuit Diagram](/5_Temperature/Images/Circuit Diagram.png)


**Task Description:**

You are responsible for developing an Arduino sketch that achieves the following objectives:

1. **Connect the Temperature Sensor:** Connect the temperature sensor to the Arduino board following the provided wiring diagram or documentation. Ensure that you specify the correct analog pin for the temperature sensor (e.g., `temperaturePin = 0`).

2. **Set Up the Serial Communication:** Configure the serial communication at a baud rate of 9600, and print a header line with column names (e.g., "voltage," "deg C," and "deg K") to make data logging easier.

3. **Create a Loop for Data Reading:** Implement a loop that continuously reads the analog voltage value from the temperature sensor using the `getVoltage()` function. 

4. **Convert Voltage to Temperature:** Calculate the temperature in degrees Celsius and Kelvin from the analog voltage value using appropriate conversion formulas.
     - Voltage to Celsius: `degreesC = (voltage - 0.5) * 100.0`
     - Celsius to Kelvin: `degreesK = degreesC + 273.15`

5. **Serial Output:** Display the voltage, temperature in Celsius, and temperature in Kelvin on the serial monitor. Use `Serial.print()` and `Serial.println()` statements to format and print the data. Use appropriate formatting and separators to make the data easily readable.

6. **Delay and Logging:** Introduce a delay (e.g., 1000 milliseconds) before the next iteration of the loop to control the rate of data logging. Adjust this delay if needed.

7. To show time mark "Show timestamp" in the bottom of Serial Monitor tab:

![TimeStamp](/5_Temperature/Images/TimeStamp.png)

8. The serial monitor can be revealed by going to Tools -\> Serial Monitor.

![SerialMonitor](/5_Temperature/Images/SerialMonitor.png)

9. Unplug the Arduino from the USB cable. The serial monitor stops being updated. Select all of the data in the serial monitor window using the mouse. Copy (ctrl + C) the data, then open a new file in Excel. Paste the data into a cell and the temperature measurements appear. 

![MonitorData](/5_Temperature/Images/MonitorData.png)


##### *The code for this task can be found [here](https://github.com/HWSHam1/Arduino_SensorsAndMotion/blob/main/5_Temperature/temperature_sensor.ino)*
