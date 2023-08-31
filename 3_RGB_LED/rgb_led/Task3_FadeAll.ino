/* HERIOT-WATT UNIVERSITY
 School of Engineering and Physical Sciences
 Mechanical Engineering Laboratory
 Arduino Experiments
 
 RGB LED control: FadeAll
   
 */

int redPin = 9; 
int bluePin = 10;
int greenPin = 11;

// Adjust the brightness of the RGB LED
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by
int allColourCount = 0;

 
void setup()
{ 
 
  Serial.begin(9600); 
  
  // Set the pins defined by redPin etc. as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
}
 
void loop()
 {
  //fading each colour individually
  if(allColourCount<2)
    { 
      //it needs to fade in and fade out and it does it in 2 cycles 
      analogWrite(redPin, brightness);
    }
  else if(allColourCount>=2 && allColourCount<4)
    {
      analogWrite(redPin, 0);//zero out
      analogWrite(bluePin, brightness);
    }
  else if(allColourCount>=4 && allColourCount<6)
    {
      analogWrite(bluePin, 0); //zero out 
      analogWrite(greenPin, brightness);  
    }
  else
    {
      analogWrite(greenPin, 0);
      allColourCount = 0;
    }

  brightness = brightness + fadeAmount;
  
  // Display the brightness value on the serial window
  Serial.println(brightness); 

  // reverse the direction of the fading at the end of the fade
  if (brightness <= 0 || brightness >= 255) 
    {
      fadeAmount = -fadeAmount;
      allColourCount++;
    } 
  
   delay(30);
  
}
