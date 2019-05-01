int state=LOW;

void setup() 
{
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int val = digitalRead(7);
  if (val == HIGH) 
  {
    if (state == LOW) 
    {
      Serial.println("Motion detected!"); 
      Serial.println(val);
      state = HIGH;
    }
  } 
  else 
  {
    if (state == HIGH)
    {
      Serial.println("Motion stopped!");
      Serial.println(val);
      state = LOW;
    }
  }
}
