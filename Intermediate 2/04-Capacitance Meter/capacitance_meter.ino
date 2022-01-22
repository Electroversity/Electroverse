/*
The following focuses on value of capacitance between 1uf - 4700uF
*/

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int charge = 8;			//Connected with 10k ohm 
int discharge = 9;		//Connected with 220 ohm 
int analogPin = A0;

//Extended size variables
unsigned long start_timer=0;
unsigned long stop_timer=0;
unsigned long duration=0;

float voltage=5;
float answer=0.0;
int measure (void);	//refer line 104

void setup() 
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("RANGE 1uF-4700uF");
  lcd.setCursor(0,1);				//(column,row)
  lcd.print("place capacitor ");
  pinMode(discharge,INPUT);			//Connected with 220 ohm 
  pinMode(charge,OUTPUT);			//Connected with 10k ohm 
  digitalWrite(charge,HIGH);
}

void loop() 
{
  
  while(measure()>=1010 && measure()<=1030){	//measure is the analog reading from a0
    lcd.setCursor(0,1);
    lcd.print("Place capacitor ");
    delay(200);
    lcd.setCursor(0,1);
    lcd.print("                ");  //Instead of clearing the second row we can do this
    delay(200);
  }
  
   delay(2000);
   lcd.setCursor(0,1);
   lcd.print("                ");
   
  while(1){ 			//While(True)
    /**********DISCHARGING*************/
    pinMode(charge,INPUT);
    pinMode(discharge,OUTPUT);
    digitalWrite(discharge,LOW);
    lcd.setCursor(0,1);
    lcd.print("Discharging-");
    
  while(voltage>2.0){
    voltage=measure();
    delay(100);
    lcd.setCursor(12,1);
    answer= voltage * (99.0 / 1023.0);
    lcd.print((99-answer),0);	//representing the it gets discharged completely
    lcd.setCursor(14,1);
    lcd.print("%");
  }
    
    lcd.setCursor(0,1);
    lcd.print("                ");
    delay(1000);
    lcd.setCursor(0,1);
    lcd.print("charging-");		//representing that it's getting charged
    lcd.setCursor(13,1);
    lcd.print("%");
  
    /***************CHARGING*****************/
    pinMode(discharge,INPUT);
    pinMode(charge,OUTPUT);
    digitalWrite(charge,HIGH);
    start_timer=micros();
    
    while(measure()<648)		//measure is the analog reading
    {
      lcd.setCursor(9,1);
      lcd.print(measure()*(100.0/1023.0),1);
    }
    
    stop_timer=micros();
    duration= stop_timer - start_timer;
    answer=duration/10000;
    lcd.clear();
   
    lcd.setCursor(0,0);
    lcd.print("value = ");
    lcd.print(answer);
    lcd.print("uF"); 
    delay(3000);
    
  while(1){
    lcd.setCursor(0,1);
    lcd.print("reset to measure");		//you can click on the reset button of arduino
    delay(200);
    lcd.setCursor(0,1);
    lcd.print("                ");  
    delay(200);
    }
   
  }
}

int measure (void)
{
  int value;
  value=analogRead(analogPin);
  //Serial.println(value);
  return value;
}