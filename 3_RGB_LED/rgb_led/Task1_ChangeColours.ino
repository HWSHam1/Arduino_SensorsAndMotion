/* HERIOT-WATT UNIVERSITY
 School of Engineering and Physical Sciences
 Mechanical Engineering Laboratory
 Arduino Experiments
 
 RGB LED control: ChangeColours
   
 */

// The RGB LED has four pins, longest one for GND, and other 3 legs corresponds to red, blue and green.
// Initializing pin number 9, 10, 11 as redPin, bluePin and greenPin respectively.
int redPin = 9; 
int bluePin = 10;
int greenPin = 11;
 
// Setup function
void setup()
 { 
  //Sets the data rate in bits per second (baud) for serial data transmission. 
  Serial.begin(9600); 

  // Set the redPin, greenPin,bluePin as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
 }
 
// loop function
void loop()
{
 
  // By changing the value of each pin from 0 to 255, various colours can be generated
  //For instance RGB value (255,0,0) corresponds to red, (0,255,255) for cyan, (128,0,128) for purple, (255,192,203) for pink
  
  // Change colour to red
  analogWrite(redPin, 255); 
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
  delay(1000);

  // Change colour to blue
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 255);
  delay(1000);

  // Change colour to green
  analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
  analogWrite(bluePin,0);
  delay(1000);

  // Colour it purple
  analogWrite(redPin, 128); 
  analogWrite(greenPin, 0);
  analogWrite(bluePin,128);
  delay(1000);

  // Turn the LED off 
  analogWrite(redPin, 0);
  analogWrite(bluePin,0);
  analogWrite(greenPin, 0);
  delay(1000);
  
}
