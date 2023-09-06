/* 
 HERIOT-WATT UNIVERSITY
 School of Engineering and Physical Sciences
 Mechanical Engineering Laboratory
 Arduino Experiments
 
 Car Lights
 Controlling 3 LEDs with 3 Push buttons.
 */

// Define constants for LED pins
#define LED_GREEN 10
#define LED_YELLOW 9
#define LED_RED 8

// Define constants for button pins
#define DOOR_1_BUTTON 3
#define DOOR_2_BUTTON 5
#define TRUNK_BUTTON 7

void setup() {
  // Initialize LED pins as OUTPUT
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_RED, OUTPUT);

  // Initialize button pins as INPUT with internal pull-up resistors
  pinMode(DOOR_1_BUTTON, INPUT_PULLUP);
  pinMode(DOOR_2_BUTTON, INPUT_PULLUP);
  pinMode(TRUNK_BUTTON, INPUT_PULLUP);
  
  // Initialize LEDs to OFF (LOW)
  digitalWrite(LED_GREEN, LOW);
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_RED, LOW);
}

void loop() {
  // Read the state of each button
  int door1Status = digitalRead(DOOR_1_BUTTON);
  int door2Status = digitalRead(DOOR_2_BUTTON);
  int trunkStatus = digitalRead(TRUNK_BUTTON);
  
  // Determine the security status based on button readings
  if (!trunkStatus && (door1Status || door2Status)) {
    // Trunk closed, one or both doors open
    digitalWrite(LED_YELLOW, HIGH);
    digitalWrite(LED_GREEN, LOW);
    digitalWrite(LED_RED, LOW);
  } else if (!trunkStatus && (door1Status || door2Status)) {
    // Trunk closed, one door open
    digitalWrite(LED_YELLOW, HIGH);
    digitalWrite(LED_GREEN, HIGH);
    digitalWrite(LED_RED, LOW);
  } else if (trunkStatus && !door1Status && !door2Status) {
    // Trunk open, all doors closed
    digitalWrite(LED_GREEN, HIGH);
    digitalWrite(LED_YELLOW, LOW);
    digitalWrite(LED_RED, LOW);
  } else if (door1Status && door2Status && trunkStatus) {
    // All doors and trunk open
    digitalWrite(LED_GREEN, HIGH);
    digitalWrite(LED_YELLOW, HIGH);
    digitalWrite(LED_RED, HIGH);
  } else {
    // In any other case, turn off all LEDs
    digitalWrite(LED_GREEN, LOW);
    digitalWrite(LED_YELLOW, LOW);
    digitalWrite(LED_RED, LOW);
  }
}





























