void setup(){
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(13,HIGH);
  Serial.println("LED is on");
  delay(2000);
  digitalWrite(13,LOW);
  Serial.println("LED is off");
  delay(1000);
  
  
}
