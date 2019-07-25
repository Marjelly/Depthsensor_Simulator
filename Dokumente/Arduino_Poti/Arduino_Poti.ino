#include <Wire.h>

int Poti=A0;
long depthNumb=0;
 
void setup() {
  
 
 pinMode(Poti,INPUT);
 Serial.begin(9600);
 Wire.begin(); 
 
}

void loop() {
  depthNumb=analogRead(Poti);
  depthNumb=depthNumb*488,28;
  Serial.println(depthNumb);
  
  Wire.beginTransmission(42); 
  Wire.write(depthNumb);             
   
  delay(100);
  
  

}
 

 
   
