
int soundSensor = 2;
int LED = 4;

void setup() 
{
  pinMode (soundSensor, INPUT);
  pinMode (LED, OUTPUT);

}

void loop() {
  int state=digitalRead(soundSensor); 
  if(state==1)       //when detect some sound
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
}
