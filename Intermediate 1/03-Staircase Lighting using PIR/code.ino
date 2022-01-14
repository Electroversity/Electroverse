#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

int sensor = 10;		
int val;			
const int bulb = 7;

int state = 0;		

void setup(){
  pinMode(bulb,OUTPUT);
  pinMode(sensor,INPUT);
  
}

void loop(){
  val = digitalRead(sensor);
  
  if(val==HIGH){
    digitalWrite(bulb,HIGH);
    delay(3000);
    if(state==0){
      lcd.setCursor(0,0);
      lcd.print("Lights ON!");
      state=1;
    }
  }else{
    digitalWrite(bulb,LOW);
    delay(1000);
    if(state==1){
      lcd.setCursor(0,0);
      lcd.print("Lights OFF!");
      state=0;
    }
  }
  
}