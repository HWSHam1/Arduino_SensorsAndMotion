#define LED_GREEN 10
#define LED_YELLOW 8
#define LED_RED 12

#define DOOR_1 3
#define DOOR_2 5
#define TRUNK 7
void setup() 
  {
  
    pinMode(LED_GREEN, OUTPUT);
    pinMode(LED_YELLOW, OUTPUT);
    pinMode(LED_RED, OUTPUT);
    
    
    pinMode(DOOR_1, INPUT);
    pinMode(DOOR_2, INPUT);
    pinMode(TRUNK, INPUT);

  }
void loop() 
  {
    if ((digitalRead(DOOR_1) == HIGH && digitalRead (DOOR_2) == HIGH)&& digitalRead (TRUNK) == HIGH) 
    {
      digitalWrite (LED_RED, HIGH);
      digitalWrite (LED_YELLOW, HIGH); 
      digitalwrite (LED_GREEN, HIGH);
    }
  
    else if ((digitalRead(DOOR_1) == HIGH || digitalRead (DOOR_2) == HIGH)&& digitalRead (TRUNK) == HIGH) 
    {
      digitalWrite (LED_YELLOW, HIGH); 
      digitalWrite (LED_GREEN, HIGH);
      digitalWrite (LED_RED, LOW);
    }
  
    else if ((digitalRead (DOOR_1) == HIGH| digitalRead (DOOR_2) == HIGH)&& digitalRead(TRUNK) == LOW) 
    {
      digitalWrite (LED_YELLOW, HIGH);
      digitalWrite(LED_GREEN, LOW);
      digitalwrite(LED_RED, LOW);
    
    } 
    
    else if ((digitalRead (DOOR_1) == LOW && digitalRead (DOOR_2) == LOW)&& digitalRead (TRUNK) == HIGH) 
    {
      digitalwrite (LED_GREEN, HIGH); 
      digitalwrite (LED_YELLOW, LOW);
      digitalwrite (LED_RED, LOW);
    }
    
    else 
    {
      delay (2000);
      digitallrite(LED_GREEN, LOW);
      digitalwrite (LED_RED, LOW);
      digitalwrite (LED_YELLOW, LOW);
    }
    
  }
