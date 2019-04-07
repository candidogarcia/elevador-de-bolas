// Controlling a servo position using a potentiometer (variable resistor) 
// by Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 

#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
 Servo myservo1;  // create servo object to control a servo 

 
void setup() 
{ 
  myservo.attach(8);  // attaches the servo on pin 9 to the servo object 
    myservo1.attach(4);  // attaches the servo on pin 9 to the servo object 
} 
 
void loop() 
{ 
     // scale it to use it with the servo (value between 0 and 180) 
  myservo.write(180);                  // sets the servo position according to the scaled value 
  delay(2000); 
    myservo.write(0);                  // sets the servo position according to the scaled value 
  delay(2000);  
  myservo1.write(180);                  // sets the servo position according to the scaled value 
  delay(2000);   
  
    myservo1.write(0);                  // sets the servo position according to the scaled value 
  delay(2000); // waits for the servo to get there 
} 
