/*
 HERIOT-WATT UNIVERSITY
 School of Engineering and Physical Sciences
 Mechanical Engineering Laboratory
 Arduino Experiments

 Pulse Width Modulation: DC Motor Control
 
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
 /* Task 1: 
   * Call funtion motorOnThenOff
   * This also passes two integer values to the function: onTime and offTime
   * These give the on and off times in ms 
 */
 motorOnThenOff(3000, 3000);

 /* Task 2:
   *  Call function motorAcceleration
   *  This passes an integer to the function (delayTime) which controls how long it waits to move.
 */
 
 //  motorAcceleration(20); 

/*  Task 3: 
  *  Call function potentiometerControl
  *  This uses the pin defined by potPin as an input which controls the motor speed.
 */
 
 //  potentiometerControl(); 
}


//Task 1
// This function turns the motor on and off.
// The variables onTime and offTime define how long the on and off periods are respectively.
void motorOnThenOff(int onTime, int offTime)
{ 
  digitalWrite(motorPin, HIGH); // turn the motor on (full speed)
  delay(onTime);                // delay for onTime milliseconds
  digitalWrite(motorPin, LOW);  // turn the motor off
  delay(offTime);               // delay for offTime milliseconds
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

//Task 3
float highestValueFromPotentiometer = 1023; // This defines the highest expected range value read from the pot.

// This function controls the speed of the DC motor using the potentiometer as a control
void potentiometerControl(){
  int val = analogRead(potPin); //The highest expected value of 1023 might need adjusting depending on the value you get from the potentiometer
  float speed = val/highestValueFromPotentiometer*255; //The highest speed you can get when val == highestValueFromPotentiometer
  analogWrite(motorPin,speed); // Set the motor speed using the potentiometer input.
}
