void setup()
{
  pinMode(13,OUTPUT);//set led to output
}

void loop()
{
  //runs infinitely
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
