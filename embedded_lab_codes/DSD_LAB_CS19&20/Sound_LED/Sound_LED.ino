int soundSensor=2;
int LED=13;
boolean LEDStatus=false;

void setup() {
  Serial.begin(9600);
 pinMode(soundSensor,INPUT);
 pinMode(LED,OUTPUT);

}

void loop() {
  int SensorData=digitalRead(soundSensor); 
   Serial.println(SensorData);
  if(SensorData==1){

    if(LEDStatus==false){
        LEDStatus=true;
        digitalWrite(LED,HIGH);
        Serial.println(SensorData);
    }
    else{
        LEDStatus=false;
        digitalWrite(LED,LOW);
        Serial.println(SensorData);
    }
  }
  //delay(100);
 } 
