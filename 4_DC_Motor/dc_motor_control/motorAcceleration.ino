/*
 HERIOT-WATT UNIVERSITY
 School of Engineering and Physical Sciences
 Mechanical Engineering Laboratory
 Arduino Experiments

 DC Motor Control: Motor Acceleration
 
 */
// Set up variable for motor pin output 
const int motorPin = 9; // Motor pin (output)

void setup()
{
  Serial.begin(9600);   // Set up the serial port;
  pinMode(motorPin, OUTPUT);// Set up the motor pin to be an output;
  pinMode(potPin, INPUT); // Set up the potentiometer pin to be an input;
}

void loop()
 {  
  /* Task 2:
    *  Call function motorAcceleration
    *  This passes an integer to the function (delayTime) which controls how long it waits to move.
  */
  motorAcceleration(20); 
 }

//Task 2
// This function slowly accelerates the motor to full speed, then back down to zero.
void motorAcceleration(int delayTime)
 {
   for(int speed = 0; speed <= 255; speed++) // accelerate the motor
    {
      analogWrite(motorPin,speed);	// set the new speed
      delay(delayTime);           	// create a delay between speed steps
    }
 
   for(int speed = 255; speed >= 0; speed--) // decelerate the motor
    {
      analogWrite(motorPin,speed);	// set the new speed
      delay(delayTime);           	// create a delay between speed steps
    }
 }

