/* 
 HERIOT-WATT UNIVERSITY
 School of Engineering and Physical Sciences
 Mechanical Engineering Laboratory
 Arduino Experiments
 
 Car Lights
 Controlling LED with Push button.
 */


// Define the pin for the yellow LED
#define LED_YELLOW 8

// Define the pins for two doors
#define DOOR_1 3
#define DOOR_2 5

void setup() 
{
  pinMode(LED_YELLOW, OUTPUT);  // Initialize the yellow LED pin as an output
  pinMode(DOOR_1, INPUT);       // Initialize the pin for door 1 as an input
  pinMode(DOOR_2, INPUT);       // Initialize the pin for door 2 as an input
}

void loop() 
{
  // Check if either of the two doors is open (button pressed)
  if (digitalRead(DOOR_1) == HIGH || digitalRead(DOOR_2) == HIGH)
  {
    digitalWrite(LED_YELLOW, HIGH); // Turn on the yellow LED
  }
  else 
  {
    digitalWrite(LED_YELLOW, LOW);  // Turn off the yellow LED
    delay(2000);                     // Wait for 2 seconds
  }
}
