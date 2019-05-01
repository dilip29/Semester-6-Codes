#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(7,INPUT);
  lcd.begin(16, 2);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.noDisplay();
  lcd.begin(16, 2);
  delay(500);
  digitalWrite(8,LOW);
  int vala = 1 ;
  vala= digitalRead(7);
  if(vala == 0)
  {
    digitalWrite(8,HIGH);
    lcd.print("Buzzer ON ");
    lcd.display();
    delay(500);
  }
  else
  {
    lcd.print("Buzzer OFF ");
    lcd.display();
    delay(500);
  }
}
