#include <LiquidCrystal.h>
#include <Servo.h>
#define motor 6
#define buzzer 3
#define switch 12
#define green 11
#define red 10
#define pir 9
bool switch_status;
Servo servo1;
Servo servo2;
int angle=92, pir_output=0;
LiquidCrystal lcd(13, 8, 7, 5, 4, 2);
void setup()
{
pinMode(red, OUTPUT);
pinMode(motor, OUTPUT);
pinMode(green, OUTPUT);
pinMode(buzzer, OUTPUT);
servo1.attach(motor);
servo2.attach(motor);
servo1.write(angle);
servo2.write(angle);
Serial.begin(9600);
}
void loop()
{
switch_status=digitalRead(switch);
pir_output=digitalRead(pir);
if(switch_status==0) //mall open (green led on)
{
digitalWrite(green, HIGH);
digitalWrite(red, LOW);
lcd.print("We're Open :)");
if(pir_output==0)
{
servo1.write(angle);
servo2.write(angle);
}
else
{
lcd.clear();
servo1.write(0);
servo2.write(0);
lcd.print("WELCOME!");
}
}
else //mall is closed (red led on)
{
lcd.print("We're Closed :(");
lcd.clear();
digitalWrite(red, HIGH);
digitalWrite(green, LOW);
if(pir_output==1)
{
servo1.write(angle);
servo2.write(angle);
digitalWrite(buzzer, HIGH);
lcd.print("THEFT DETECTED!");
}
else
{
servo1.write(angle);
servo2.write(angle);
digitalWrite(buzzer, LOW);
lcd.print("We're Closed :(");
}
}
Serial.print("pir status: ");
Serial.print(pir_output);
Serial.print(", slideswitch status: ");
Serial.print(switch_status);
Serial.print("\n");
delay(1000);
lcd.clear();
}
