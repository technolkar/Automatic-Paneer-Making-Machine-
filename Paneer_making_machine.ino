//This code is written by Technolokar and it is used for making the Automatic Panner making Machine 

// Define the relay control pins
#include <Servo.h>

Servo myservo;

int relay1 = 2;//heater
int relay2 = 3;//light
int relay3 = 4;//valve close 
int relay4 = 5;// valve open 
int relay5 = 6; // pressing down 
int relay6 = 7; // pressing up 

void setup() {
  // Set the relay control pins as OUTPUT
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  pinMode(relay5, OUTPUT);
  pinMode(relay6, OUTPUT); 
 
  myservo.attach(10);
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
  digitalWrite(relay5, HIGH);
  digitalWrite(relay6, HIGH);
 
 // Turn on and off each relay sequentially with a delay
  digitalWrite(relay1, LOW); // heater on 
  // Turn on the servo motor for 360 degrees
  myservo.write(360);
  delay(5000); // delay to heat the water and milk 4min delay
  digitalWrite(relay2, LOW);// on the green bulb to indicate of veniger 
  delay(2000);// put veniger now 
  digitalWrite(relay2, HIGH);
  delay(5000); // delay to damage the milk 
  digitalWrite(relay4, LOW); // valve motor open 
  delay(3000);
  digitalWrite(relay4, HIGH);
  delay(6000); // delay to drop panner in container through pipe 
  digitalWrite(relay1, HIGH); // heater off
  delay(2000); 
  digitalWrite(relay5, LOW); // pressing of panner starts firt time dont change this 
  delay(5000);
  digitalWrite(relay5,HIGH);
  delay(3000);
  digitalWrite(relay6, LOW);// lifting up motor first time  
  delay(5000);
  digitalWrite(relay6,HIGH);
  delay(2000);
  digitalWrite(relay5, LOW); // pressing of panner starts second time 
  delay(5000);
  digitalWrite(relay5,HIGH);
  delay(3000);
  digitalWrite(relay6, LOW);// lifting up motor second time 
  delay(5000);
  digitalWrite(relay6,HIGH);
  delay(2000);
  digitalWrite(relay3,LOW); //valve close function 
  delay(3000);
  digitalWrite(relay3,HIGH);
}
void loop() 
{ 
  // Wait for a moment before the next loop
  delay(20000000000000);  // Wait for 2 seconds before starting again
}
