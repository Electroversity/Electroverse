#include "LiquidCrystal.h"
LiquidCrystal lcd(12,11,5,4,3,2);

int Force_VAL = 0;
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
  
  lcd.setCursor(0,0);
  lcd.print("Force Sensor VALUE");

  pinMode(10, OUTPUT);
}

void loop()
{
  Force_VAL = analogRead(A0);
  Serial.println(Force_VAL);
  
  lcd.setCursor(0,1);
  lcd.print(Force_VAL);

 if (Force_VAL > 500)
 {
    digitalWrite(10, HIGH);
  } 
else
 {
    digitalWrite(10, LOW);
  }
 delay(10); // Delay a little bit to improve simulation performance
}
