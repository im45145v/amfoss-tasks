int pirsensor =0 ;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
   pirsensor = digitalRead(2);
  if (pirsensor == LOW)
  {
   digitalWrite(13,LOW);
  }
  else
  {
    digitalWrite(13,HIGH);
  }
  delay (10);
}