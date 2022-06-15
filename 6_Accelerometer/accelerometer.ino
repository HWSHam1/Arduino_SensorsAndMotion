/**************************************************************************/
/*!
    @file     Adafruit_MMA8451.h
    @author   K. Townsend (Adafruit Industries)
    @license  BSD (see license.txt)

    This is an example for the Adafruit MMA8451 Accel breakout board
    ----> https://www.adafruit.com/products/2019

    Adafruit invests time and resources providing this open source code,
    please support Adafruit and open-source hardware by purchasing
    products from Adafruit!

    @section  HISTORY

    v1.0  - First release

  Some modifications made by Steven Hammer (s.hammer@hw.ac.uk)
  
  These were made to make it easier to copy/paste data from the serial monitor output
  into a text file or spreadsheet.
  
  Heriot-Watt University
  November 2020

/*
/**************************************************************************/

#include <Wire.h>
#include <Adafruit_MMA8451.h>
#include <Adafruit_Sensor.h>

Adafruit_MMA8451 mma = Adafruit_MMA8451();
unsigned long time; // Timestamp

void setup(void) {
  Serial.begin(9600); // If you get nonsense from the serial window, set the baud rate to match the value here.
  delay(100);
  Serial.println("---DO NOT COPY THIS FIRST LINE (or serial monitor data won't paste into Excel)---");
  Serial.println();
  Serial.println("Adafruit MMA8451 test!");
   
  if (! mma.begin()) {
    Serial.print("Couldnt start");
    while (1);
  }
  Serial.println("MMA8451 found!");
  
  mma.setRange(MMA8451_RANGE_2_G); //Range of the sensor can be adjusted here. This gives a 2G limit.

  // Send header to the serial monitor
  Serial.print("Range = "); Serial.print(2 << mma.getRange());Serial.print("G");
  Serial.println();
  Serial.println("Data");
  Serial.println();
  // Serial print column names
  Serial.print("Time (ms) \t X: \t");Serial.print("Y: \t");Serial.print("Z: (m/s^2) \t");Serial.print("Orientation");Serial.println();
  
}

void loop() {

  // Read time since program began
  time = millis();
  
  // Read the 'raw' data in 14-bit counts
  //mma.read(); // This gives raw sensor readings in sensor-specific units.
  // It's best to use the results in m/s^2 which are read below.
  //Serial.print("X:\t"); Serial.print(mma.x); 
  //Serial.print("\tY:\t"); Serial.print(mma.y); 
  //Serial.print("\tZ:\t"); Serial.print(mma.z); 
  //Serial.println();

  /* Get a new sensor event */ 
  sensors_event_t event; 
  mma.getEvent(&event);

  /* Display the results (acceleration is measured in m/s^2) */
  Serial.print(time);Serial.print("\t"); // Timestamp (relative ms) plus tab character
  Serial.print(event.acceleration.x); Serial.print("\t"); // Acceleration in x (m/s^2) plus tab
  Serial.print(event.acceleration.y); Serial.print("\t"); // Acceleration in y (m/s^2) plus tab
  Serial.print(event.acceleration.z); Serial.print("\t"); // Acceleration in z (m/s^2) plus tab
  // Adding tab characters puts the serial monitor output into a format that can be copied and pasted into Excel

  /* Get the orientation of the sensor */
  uint8_t o = mma.getOrientation();

  // Use a case structure to return the appropriate orientation of the mma.getOrientation() function call
  switch (o) {
    case MMA8451_PL_PUF: 
      Serial.print("Portrait Up Front");
      break;
    case MMA8451_PL_PUB: 
      Serial.print("Portrait Up Back");
      break;    
    case MMA8451_PL_PDF: 
      Serial.print("Portrait Down Front");
      break;
    case MMA8451_PL_PDB: 
      Serial.print("Portrait Down Back");
      break;
    case MMA8451_PL_LRF: 
      Serial.print("Landscape Right Front");
      break;
    case MMA8451_PL_LRB: 
      Serial.print("Landscape Right Back");
      break;
    case MMA8451_PL_LLF: 
      Serial.print("Landscape Left Front");
      break;
    case MMA8451_PL_LLB: 
      Serial.print("Landscape Left Back");
      break;
    }
  Serial.println(); // Add a linefeed character - ends line with acceleration and orientation data.
  delay(100);
  
}
