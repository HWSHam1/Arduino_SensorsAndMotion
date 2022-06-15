/* 
 HERIOT-WATT UNIVERSITY
 School of Engineering and Physical Sciences
 Mechanical Engineering Laboratory
 Arduino Experiments
 
 Temperature sensing
 Measure the ambient temperature using a thermistor.
 */
const int temperaturePin = 0;


void setup()
{
  pinMode(temperaturePin, INPUT);
  Serial.begin(9600);
  Serial.println("<DO NOT COPY THIS LINE>");
  Serial.println("");
  //Print the first line of the data (with column names)
  Serial.print("voltage:"); //Serial.print just prints a value 
  Serial.print("\t"); // prints a tab character
  Serial.print("deg C:");
  Serial.print("\t");
  Serial.println("deg K:");
  // This will make it easier to copy and paste the data into a spreadsheet.
}

void loop()
{
  float voltage, degreesC, degreesK; //You can declare multiple variables of the same type on one line
  // A float is a floating point number
  
  voltage = getVoltage(); //Call the method 
  
  degreesC = (voltage - 0.5) * 100.0; //Convert the voltage to degrees Celsius.
  
  degreesK = degreesC + 273.15; //Convert Celsius to Kelvin 
  
  //Ensure that the baud rate control at the bottom of the window is set to 9600. If it isn't, change it to 9600.)
  Serial.print(voltage);
  Serial.print("\t");
  Serial.print(degreesC);
  Serial.print("\t");
  Serial.println(degreesK); //Serial.println pints/finishes line 

  // Wait one second before looping again. 
  // Adjust the delay value if you want to read the temperature more frequently than once per second.
  delay(1000); 
  
}

float getVoltage(){
  int reading = analogRead(temperaturePin);
  float voltage = reading * 5.0/1024.0;
  return voltage;
}
