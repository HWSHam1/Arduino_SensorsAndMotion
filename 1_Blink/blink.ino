/*
 HERIOT-WATT UNIVERSITY
 School of Engineering and Physical Sciences
 Mechanical Engineering Laboratory
 Arduino Experiments
 
 Blink
 Turns on an LED on for 1500 millisecond, then off for 1500 millisecond, repeatedly.
  
*/

int LEDpin = 13; //This declares the variable LEDpin as an integer.
// LEDpin defines the output pin used by the Arduino to power the LED.

// The setup() method runs once when you press reset or power on the board.
void setup()
{
  pinMode(LEDpin, OUTPUT);    // initialize the digital LED port as an output
}

// The loop() method runs over and over again as long as the Arduino is powered on.
void loop()
{
  digitalWrite(LEDpin, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1500);             // Wait for 1500 milliseconds
  digitalWrite(LEDpin, LOW); // turn the LED off (LOW is the voltage level)
  delay(1500);             // Wait for 1500 milliseconds
}
