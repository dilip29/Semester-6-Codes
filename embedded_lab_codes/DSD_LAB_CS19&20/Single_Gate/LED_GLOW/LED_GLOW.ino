/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  //pinMode(LED_BUILTIN, OUTPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(11,HIGH);
  int vala = digitalRead(7);
  int valb = digitalRead(8);
  int valc = digitalRead(9);
  int vald = digitalRead(10);
  if (vala == 0 && valb == 0)
  {
    if(valc == 1 || vald == 1)
    {
      digitalWrite(11, HIGH);
      Serial.println("or gate high");
    }
    else
    {
      digitalWrite(11, LOW);
      Serial.println("or gate low");
    }
  }
  else if (vala == 1 && valb == 0)
  {
    if(valc == 1 && vald == 1)
    {
      digitalWrite(11, HIGH);
      Serial.println("and gate high");
    }
    else
    {
      digitalWrite(11, LOW);
      Serial.println("and gate low");
    }
  }
  else if (vala == 0 && valb == 1)
  {
    if(valc == 1 && vald == 0)
    {
      digitalWrite(11, HIGH);
      Serial.println("xor gate high");
    }
    else if(valc == 0 && vald == 1)
    {
      digitalWrite(11, HIGH);
      Serial.println("xor gate high");
    }
    else
    {
      digitalWrite(11, LOW);
      Serial.println("xor gate low");
    }
  }
  //digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(1000);                       // wait for a second
  //digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  //delay(1000);                       // wait for a second
}
