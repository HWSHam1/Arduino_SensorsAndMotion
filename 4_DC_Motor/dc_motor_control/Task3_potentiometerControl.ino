/*
 HERIOT-WATT UNIVERSITY
 School of Engineering and Physical Sciences
 Mechanical Engineering Laboratory
 Arduino Experiments

 DC Motor Control: Potentiometer Control
 
 */
// Set up two variables 
const int motorPin = 9; // Motor pin (output)
const int potPin = 0; // Potentiometer pin (input)


void setup()
 {
   Serial.begin(9600);   // Set up the serial port;
   pinMode(motorPin, OUTPUT);// Set up the motor pin to be an output;
   pinMode(potPin, INPUT); // Set up the potentiometer pin to be an input;
 }


void loop()
 { 
 /*  Task 3: 
   *  Call function potentiometerControl
   *  This uses the pin defined by potPin as an input which controls the motor speed.
  */
   potentiometerControl(); 
 }

//Task 3
float highestValueFromPotentiometer = 1023; // This defines the highest expected range value read from the pot.

// This function controls the speed of the DC motor using the potentiometer as a control
void potentiometerControl()
 {
   int val = analogRead(potPin); //The highest expected value of 1023 might need adjusting depending on the value you get from the potentiometer
   float speed = val/highestValueFromPotentiometer*255; //The highest speed you can get when val == highestValueFromPotentiometer
   analogWrite(motorPin,speed); // Set the motor speed using the potentiometer input.
 }
