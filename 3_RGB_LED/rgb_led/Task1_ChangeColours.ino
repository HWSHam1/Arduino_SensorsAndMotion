/* HERIOT-WATT UNIVERSITY
 School of Engineering and Physical Sciences
 Mechanical Engineering Laboratory
 Arduino Experiments
 
 RGB LED control: ChangeColours
   
 */

// The RGB LED has four pins, longest one for GND, and other 3 legs corresponds to red, blue and green.
// Initializing pin number 11, 10, 9 as redPin, greenPin and bluePin respectively.
int redPin = 11; 
int greenPin = 10;
int bluePin = 9;
 
// Setup function
void setup()
 { 
  //Sets the data rate in bits per second (baud) for serial data transmission. 
  Serial.begin(9600); 

  // Set the redPin, greenPin,bluePin as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  // Set the pin defined by potPin as an input
  pinMode(potPin, INPUT);  
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
