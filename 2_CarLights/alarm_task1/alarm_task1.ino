/* HERIOT-WATT UNIVERSITY
 School of Engineering and Physical Sciences
 Mechanical Engineering Laboratory
 Arduino Experiments

 Alarm - task 1
 
*/

// Create variables for buttons and LEDs

//Switches - these define the pins used for each switch 
int swA = 11;
int swB = 10;

//LEDs - these define the pins used for each LED
int LedA = 7;
int LedB = 6;

//Set up variables to record the value of each button
int valA = 0; 
int valB = 0;

void setup() {
  // Set up the modes for each pin used by the switches and LEDs
  
  // Switches record an input, so are set to INPUT
  pinMode(swA, INPUT); 
  pinMode(swB, INPUT);
  
  // LEDs give an output, so are set to OUTPUT  
  pinMode(LedA, OUTPUT);
  pinMode(LedB, OUTPUT);

  // Assign LOW as the initial state of the LEDs
  // Basically, make sure they're switched off when the program starts
  digitalWrite(LedA, LOW);  
  digitalWrite(LedB, LOW); 
}

void loop() {
  //Read the inputs from the buttons and record them in a variable
  valA = digitalRead(swA); 
  valB = digitalRead(swB);
  
  // Two LED tank level setup
  if (valA == LOW) digitalWrite(LedA, HIGH); //if the first button from the top is pressed, LED A glows
  if (valB == HIGH) digitalWrite(LedB, HIGH);  //if the second button is not pressed, LED B glows
}
