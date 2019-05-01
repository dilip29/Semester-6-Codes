long duration;
int distance;
void setup() {
pinMode(6, OUTPUT);
pinMode(5, INPUT);
Serial.begin(9600);
}
void loop() {
digitalWrite(6, LOW);
delayMicroseconds(2);
digitalWrite(6, HIGH);
delayMicroseconds(10);
digitalWrite(6, LOW);
duration = pulseIn(5, HIGH);
distance= duration*0.034/2;
Serial.print("Distance: ");
Serial.println(distance);
delay(1000);
}
