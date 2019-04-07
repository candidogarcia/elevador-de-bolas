Servo myservo;  // create servo object to control a servo 
Servo myservo1;  // create servo object to control a servo 

 
void setup() 
{ 
  myservo.attach(8);  
  myservo1.attach(4);  
} 
 
void loop() 
{ 
  myservo.write(180);                  
  delay(2000); 
 
  myservo.write(0);                  
  delay(2000); 
 
  myservo1.write(180);                 
  delay(2000);   
  
  myservo1.write(0);                  
  delay(2000); 
} 
