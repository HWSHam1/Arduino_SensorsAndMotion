# Arduino package installation – MMA8451 accelerometer libraries

Steven Hammer [s.hammer@hw.ac.uk](mailto:s.hammer@hw.ac.uk) 28/09/2020

# Installing packages

For some Arduino tutorials, an additional library file is required to operate the components correctly. In one example, an Adafruit MMA8451 accelerometer is used which needs a library installation to function properly.

To install the library, go to the Tools menu in the Arduino IDE and select "Manage Libraries".

![](https://github.com/HWSHam1/Arduino_SensorsAndMotion/blob/main/6_Accelerometer/Images/LibraryManagerWindow.png)

The Library Manager window should appear.

![](https://github.com/HWSHam1/Arduino_SensorsAndMotion/blob/main/6_Accelerometer/Images/LibraryManagerSearch.png)

Search for "MMA8451" in the search box at the top of the window.

![](https://github.com/HWSHam1/Arduino_SensorsAndMotion/blob/main/6_Accelerometer/Images/Install.png)

To install the library, click on the "Install" button.

Once the library is installed correctly, if you select 
` "Sketch -\> Include Library" `
then ` "Adafruit MMA8451 Library"` should appear in the ` "Recommended Libraries" ` section of the menu.

To allow your code to control the accelerometer, before the ` void setup() ` statement in the Arduino sketch,you should then put:

` #include \<Adafruit\_MMA8451.h\> `
