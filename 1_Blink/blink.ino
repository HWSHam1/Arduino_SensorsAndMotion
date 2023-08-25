/*
 HERIOT-WATT UNIVERSITY
 School of Engineering and Physical Sciences
 Mechanical Engineering Laboratory
 Arduino Experiments
 
 Blink
 Turns on an LED ON for 1 second (1000 millisecond), then turn it OFF for 1 second (1000 millisecond), repeatedly.
  
*/



int LEDpin = 13;                //Initializing a variable LEDpin of type int, and assigning pin number 13 to that

// The setup() method runs once when you press reset or power on the board.

void setup()
 {
  pinMode(LEDpin, OUTPUT);      // initialize the LEDpin as an output
 }

// The loop() method runs over and over again as long as the Arduino is powered on.
void loop()
 {
  digitalWrite(LEDpin, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                 // Wait for 1000 milliseconds
  digitalWrite(LEDpin, LOW);  // turn the LED off (LOW is the voltage level)
  delay(1000);                // Wait for 1000 milliseconds
 }
