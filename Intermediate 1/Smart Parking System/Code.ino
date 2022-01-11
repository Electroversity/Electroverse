#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int cm1 = 0;
int inches1 = 0;
int cm2 = 0;
int inches2 = 0;
int cm3 = 0;
int inches3 = 0;

//for slot 1
long readUltrasonicDistance1(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT); 
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}
//for slot 2
long readUltrasonicDistance2(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}
//for slot 3
long readUltrasonicDistance3(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}
void setup() 
{
  Serial.begin(9600);
  lcd.begin(16, 2);
}
void loop() 
{
  cm1 = 0.01723 * readUltrasonicDistance1(8, 8);
  cm2 = 0.01723 * readUltrasonicDistance2(9, 9);
  cm3 = 0.01723 * readUltrasonicDistance3(10, 10);
  
if(cm1>320 && cm2>320 && cm3>320)
{
	lcd.begin(16, 2);
    lcd.setCursor(0, 0);
    lcd.print("All slots are");
    lcd.setCursor(0, 1);
    lcd.print("empty");
    delay(50);
}
if((cm1<=320 && cm2>320 && cm3>320))
{
	lcd.begin(16, 2);
    lcd.setCursor(0, 0);
    lcd.print("2 slots empty");
    lcd.setCursor(0, 1);
    lcd.print("Slot 2, 3 empty");
    delay(300);
}
if((cm1>320 && cm2<=320 && cm3>320))
{
	lcd.begin(16, 2);
    lcd.setCursor(0, 0);
    lcd.print("2 slots empty");
    lcd.setCursor(0, 1);
    lcd.print("Slot 1, 3 empty");
    delay(300);
}
if((cm1>320 && cm2>320 && cm3<=320))
{
	lcd.begin(16, 2);
    lcd.setCursor(0, 0);
    lcd.print("2 slots empty");
    lcd.setCursor(0, 1);
    lcd.print("Slot 1, 2 empty");
    delay(300);
}
if((cm1>320 && cm2<=320 && cm3<=320))
{
	lcd.begin(16, 2);
    lcd.setCursor(0, 0);
    lcd.print("1 slot empty");
    lcd.setCursor(0, 1);
    lcd.print("Slot 1 empty");
    delay(300);
}
if((cm1<=320 && cm2>320 && cm3<=320))
{
	lcd.begin(16, 2);
    lcd.setCursor(0, 0);
    lcd.print("1 slot empty");
    lcd.setCursor(0, 1);
    lcd.print("Slot 2 empty");
    delay(300);
}
if((cm1<=320 && cm2<=320 && cm3>320))
{
	lcd.begin(16, 2);
    lcd.setCursor(0, 0);
    lcd.print("1 slot empty");
    lcd.setCursor(0, 1);
    lcd.print("Slot 3 empty");
    delay(300);
}
if((cm1<=320 && cm2<=320 && cm3<=320))
{
   lcd.begin(16, 2);
   lcd.setCursor(0, 0);
   lcd.print("All slots are");
   lcd.setCursor(0, 1);
   lcd.print("full");
   delay(300);
}
  lcd.clear();
}
