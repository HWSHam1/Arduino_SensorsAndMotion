/*
 HERIOT-WATT UNIVERSITY
 School of Engineering and Physical Sciences
 Mechanical Engineering Laboratory
 Arduino Experiments

 DC Motor Control: Motor ON & OFF
 
 */
// Set up a variable for motor pin
const int motorPin = 9; // Motor pin (output)

void setup()
{
  Serial.begin(9600);   // Set up the serial port;
  pinMode(motorPin, OUTPUT);// Set up the motor pin to be an output;
}


void loop()
 {
  /* Task 1: 
    * Call funtion motorOnThenOff
    * This also passes two integer values to the function: onTime and offTime in miliseconds
  */
  motorOnThenOff(3000, 3000);

 }

// This function turns the motor on and off.
// The variables onTime and offTime define how long the on and off periods are respectively.
void motorOnThenOff(int onTime, int offTime)
 { 
   digitalWrite(motorPin, HIGH); // turn the motor on (full speed)
   delay(onTime);                // delay for onTime milliseconds
   digitalWrite(motorPin, LOW);  // turn the motor off
   delay(offTime);               // delay for offTime milliseconds
 }
