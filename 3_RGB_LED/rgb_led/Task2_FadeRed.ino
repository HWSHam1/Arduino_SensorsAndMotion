/* HERIOT-WATT UNIVERSITY
 School of Engineering and Physical Sciences
 Mechanical Engineering Laboratory
 Arduino Experiments
 
 RGB LED control: FadeRed
   
 */

int redPin = 11; 
int bluePin = 10;
int greenPin = 9;

// Adjust the brightness of the RGB LED
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

//setup function 
void setup()
{ 
 // Sets the data rate in bits per second (baud) for serial data transmission.
  Serial.begin(9600); 
  

  // Set the pins defined by redPin etc. as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  // Set the pin defined by potPin as an input
  pinMode(potPin, INPUT);
  
}

//loop function
void loop()
{
   analogWrite(redPin, brightness);
  
  // change the brightness for next time through the loop
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade
  if (brightness <= 0 || brightness >= 255) 
    {
      fadeAmount = -fadeAmount;
    }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);

}
