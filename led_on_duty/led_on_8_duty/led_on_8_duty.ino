void setup() {

  pinMode(13, OUTPUT);
  
}
unsigned long previousMicors = 0; 
unsigned long previousMillis = 0; 
int count = 0;
int duty = 0;


void loop() {
  unsigned long currentMicros = micros(); 
  unsigned long currentMillis = millis(); 

   
  if(currentMicros - previousMicors > 100)
  {
    previousMicors = currentMicros;
    
    count++;
    if(count == 100)
    {
      digitalWrite(13, 1);
      count = 0;
    }
    
    if(count == duty)
    {
      digitalWrite(13, 0);
    }
      
  }

  if(currentMillis - previousMillis > 20)
  {
    previousMillis = currentMillis;
    
    duty++;
    if(duty == 90)
    {
      duty = 10;
    }
  }
}
