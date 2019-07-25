
int Poti=A0;
long depthNumb=0;
 
void setup() {
  
 
 pinMode(Poti,INPUT);
 Serial.begin(9600);

}

void loop() {
  depthNumb=analogRead(Poti);
  depthNumb=depthNumb*488,28;
  Serial.println(depthNumb);
   
  delay(100);
  
  

}
 

 
   
