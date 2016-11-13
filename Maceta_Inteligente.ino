const int VAL_PROBE = 0; //Analog pin 0  
 const int MOISTURE_LEVEL = 450; // the value after the LED goes on  
 void setup()  
 {  
  Serial.begin(9600);  
  pinMode(13, OUTPUT);  
  pinMode(7, OUTPUT);  
 }  
 void LedState(int state)  
 {  
  digitalWrite(7,state);  
 }  
 void loop()  
 {  
  int moisture = analogRead(VAL_PROBE);  
  Serial.print("Moisture = ");  
  Serial.println(moisture);  
  if(moisture > MOISTURE_LEVEL)  
  {  
   LedState(HIGH);  
   digitalWrite(13,LOW);  
  }  
  else   
  {  
   LedState(LOW);  
   digitalWrite(13,HIGH);  
  }  
  delay(500);  

  
 }  

