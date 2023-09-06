/* 
 HERIOT-WATT UNIVERSITY
 School of Engineering and Physical Sciences
 Mechanical Engineering Laboratory
 Arduino Experiments
 
 Car Lights
 Controlling one LED with a Push button along with a delay.
 */
// Define Constants:
#define LED_YELLOW 8     // Define the LED pin as pin 8
#define DOOR 3           // Define the door sensor pin as pin 3

void setup() {
  // Initialization:
  pinMode(LED_YELLOW, OUTPUT); // Configure LED_YELLOW pin as an output
  pinMode(DOOR, INPUT);        // Configure DOOR pin as an input for the door sensor
}

void loop() {
  // Main Loop:
  
  // Check the status of the door sensor (HIGH means door open or button pressed):
  if (digitalRead(DOOR) == HIGH) {
    // If the door is open (or button pressed), do the following:
    
    digitalWrite(LED_YELLOW, HIGH); // Turn on the yellow LED (LED_YELLOW pin)
  } 
  else {
    // If the door is closed (or button released), do the following:
    
    delay(2000);                   // Wait for 2 seconds (keeping the LED on briefly)
    digitalWrite(LED_YELLOW, LOW); // Turn off the yellow LED (LED_YELLOW pin)
  }
}

