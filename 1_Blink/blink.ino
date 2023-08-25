/*
 HERIOT-WATT UNIVERSITY
 School of Engineering and Physical Sciences
 Mechanical Engineering Laboratory
 Arduino Experiments
 
 Blink
 Turns on an LED ON for 1 second (1000 millisecond), then turn it OFF for 1 second (1000 millisecond), repeatedly.
  
*/

// The setup() method runs once when you press reset or power on the board.
void setup()
 {
  pinMode(LED_BUILTIN, OUTPUT);    // initialize the LED Builtin port, which is port 13 for Arduino Uno, as an output
 }

// The loop() method runs over and over again as long as the Arduino is powered on.
void loop()
 {
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000);             // Wait for 1500 milliseconds
  digitalWrite(LED_BUILTIN, LOW); // turn the LED off (LOW is the voltage level)
  delay(1000);             // Wait for 1500 milliseconds
 }
