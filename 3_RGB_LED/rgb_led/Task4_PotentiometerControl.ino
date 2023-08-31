/* HERIOT-WATT UNIVERSITY
 School of Engineering and Physical Sciences
 Mechanical Engineering Laboratory
 Arduino Experiments
 
 RGB LED control:PotentiometerControl
   
 */

int redPin = 9; 
int bluePin = 10;
int greenPin = 11;


// Control the brightness using a potentiometer
int potPin = A0;    // select the input pin for the potentiometer
int val = 0;       // variable to store the value coming from the potentiometer

float highestValueFromPotentiometer = 1023; // Set limiting value of potentiometer
float value = 0; //255 is the highest value you can set for RGB colours 
// Using a float instead of an integer will give a smoother transition when turning the potentiometer
  
 
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
  
  val = analogRead(potPin); //highestValueFromPotentiometer might need adjustment depending on the value you get from the potentiometer
  Serial.println(highestValueFromPotentiometer); //You can check the results from the pot by printing them to the serial window
  value = val/highestValueFromPotentiometer*255; //The highest value you can get when val == highestValueFromPotentiometer
  
  analogWrite(redPin, value);
  
}
