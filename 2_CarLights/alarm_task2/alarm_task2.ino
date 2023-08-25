/* HERIOT-WATT UNIVERSITY
 School of Engineering and Physical Sciences
 Mechanical Engineering Laboratory
 Arduino Experiments

 Alarm - task 2
 
*/

// Create variables for buttons and LEDs

//Switches - these define the pins used for each switch 
int swA = 11;
int swB = 10;
int swC = 9;

//LEDs - these define the pins used for each LED
int LedA = 7;
int LedB = 6;
int LedC = 5;

//Set up variables to record the value of each button
int valA = 0; 
int valB = 0;
int valC = 0;

void setup() {
  Serial.begin(9600); //Serial.begin is used to stream data over the usb port 
  // Set up the modes for each pin used by the switches and LEDs
  // Switches record an input, so are set to INPUT
  pinMode(swA, INPUT); 
  pinMode(swB, INPUT);
  pinMode(swC, INPUT);
  
  // LEDs give an output, so are set to OUTPUT  
  pinMode(LedA, OUTPUT);
  pinMode(LedB, OUTPUT);
  pinMode(LedC, OUTPUT);

  //Assign LOW as the initial state of the LEDs
  // Basically, make sure they're switched off when the program starts
  digitalWrite(LedA, LOW);  
  digitalWrite(LedB, LOW); 
  digitalWrite(LedC, LOW); 
}

void loop() {
  //Read the inputs from the buttons and record them in a variable
  valA = digitalRead(swA); 
  valB = digitalRead(swB);

    if(valA == HIGH && valB == LOW)
    {
      //If the first button is not pressed AND the second button is pressed, LED A glows
      digitalWrite(LedA, HIGH);
      Serial.println("LED A on");
      }
    else if(valA == HIGH && valB == HIGH)
    {
      // If the first button is not pressed AND the second button is not pressed, LED B glows
      digitalWrite(LedB, HIGH);
      Serial.println("LED B on");
      }
    else if(valA == LOW && valB == LOW)
    {
      // If the first button is pressed AND the second button is pressed, LED C glows
      digitalWrite(LedC, HIGH);
      Serial.println("LED C on");
      }
    else
    {
      Serial.println ("ERROR!"); //If none of the above conditions are met, the Error message is printed in the Arduino IDE serial window
      }
}
