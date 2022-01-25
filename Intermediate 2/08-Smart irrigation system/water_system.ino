#include<LiquidCrystal.h>
const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int degree;
double realdegree;
String lcdbuffer;
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  lcd.begin(16,2);
  realdegree=0;
  degree=0;
  lcd.print("Current Temp.is:");
}

void loop()
{

  lcd.print("");
  degree=analogRead(0);
  realdegree=(double)degree/1024;
  realdegree*=5;
  realdegree-=0.5;
  realdegree*=100;
  lcd.setCursor(0,1);
  if(realdegree<30)
  {
    digitalWrite(9,HIGH);
    digitalWrite(8,HIGH);
  }
   if(realdegree>45)
  {
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
  }
  String output=String(realdegree)+String((char)178)+"C";
  lcd.print(output);
}
