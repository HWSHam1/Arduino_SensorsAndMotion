/* HERIOT-WATT UNIVERSITY
 School of Engineering and Physical Sciences
 Mechanical Engineering Laboratory
 Arduino Experiments
 
 Pulse Width Modulation: RGB LED control
   
 */

int redPin = 11; 
int bluePin = 10;
int greenPin = 9;

int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

int allColourCount = 0;

// Control the brightness using a potentiometer
int potPin = 0;    // select the input pin for the potentiometer
int val = 0;       // variable to store the value coming from the potentiometer

 
void setup()
{ 
 
  Serial.begin(9600); 
 

  // Set the pins defined by redPin etc. as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  // Set the pin defined by potPin as an input
  pinMode(potPin, INPUT);
  
}
 
void loop()
{
 
  int speed = 10; //smaller values makes it fade faster
  // This for loop counts up from 0 to 255 in increments of 1.
  for(int fadeCount=0; fadeCount<255; fadeCount++){ 
   analogWrite(redPin, fadeCount); //Set the redPin value using fadeCount
   delay(fadeDelay); 
}

//Task 1
void changeColoursRGB(){ 
  // You can choose different values for each pin to control the colour output
  //
  // Change colour to red
  analogWrite(redPin, 255); 
  analogWrite(bluePin, 0);
  analogWrite(greenPin, 0);
  delay(1000);

  // Change colour to blue
  analogWrite(redPin, 0);
  analogWrite(bluePin, 255);
  analogWrite(greenPin, 0);
  delay(1000);

  // Change colour to green
  analogWrite(bluePin,0);
  analogWrite(greenPin, 255);
  analogWrite(redPin, 0);
  delay(1000);

  // Colour it purple
  analogWrite(greenPin, 0);
  analogWrite(redPin, 128); 
  analogWrite(bluePin,128);
  delay(1000);

  // Turn the LED off 
  analogWrite(redPin, 0);
  analogWrite(bluePin,0);
  analogWrite(greenPin, 0);
  delay(1000);
}

//Task 2
void fadeRed(){
  analogWrite(redPin, brightness);
  
  // change the brightness for next time through the loop
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}

//Task 3
void fadeAll(){
  //fading each colour individually
  if(allColourCount<2){ //it needs to fade in and fade out and it does it in 2 cycles 
    analogWrite(redPin, brightness);
  }else if(allColourCount>=2 && allColourCount<4){
    analogWrite(redPin, 0);//zero out
    analogWrite(bluePin, brightness);
  }else if(allColourCount>=4 && allColourCount<6){
    analogWrite(bluePin, 0); //zero out 
    analogWrite(greenPin, brightness);  
  }else{
    analogWrite(greenPin, 0);
    allColourCount = 0;
  }

  brightness = brightness + fadeAmount;
  Serial.println(brightness); // Display the brightness value on the serial window

  // reverse the direction of the fading at the end of the fade
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
    allColourCount++;
  } 
  delay(30);
 }


//Task 4
float highestValueFromPotentiometer = 1023; // Set limiting value of potentiometer
float value = 0; //255 is the highest value you can set for RGB colours 
// Using a float instead of an integer will give a smoother transition when turning the potentiometer
  
void potentiometerControl(){
  val = analogRead(potPin); //highestValueFromPotentiometer might need adjustment depending on the value you get from the potentiometer
  //Serial.println(highestValueFromPotentiometer)' //You can check the results from the pot by printing them to the serial window
  value = val/highestValueFromPotentiometer*255; //The highest value you can get when val == highestValueFromPotentiometer
  
  analogWrite(redPin, value);
}

void speedOfFadingIn(int fadeDelay){ //by passing a parameter to a method you can change fadeDelay when calling the method in the loop 
  // This for loop counts up from 0 to 255 in increments of 1.
  for(int fadeCount=0; fadeCount<255; fadeCount++){ 
   analogWrite(redPin, fadeCount); //Set the redPin value using fadeCount
   delay(fadeDelay); 
  }
}

void percentOfBrightness(float pc){
  float pcBright = 255*pc/100; //taking the percent c of value 255
  analogWrite(redPin, pcBright);
}
