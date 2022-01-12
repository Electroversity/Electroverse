
// include the library code:
#include <LiquidCrystal.h>

int h=15;	//set the current hour 
int m=11;	//set the current minute
int s=50;	//set the current second
int flag=1;	//pm


// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(1,1);	//2nd row first column
  lcd.print("Digital Clock");
  
  lcd.setCursor(2, 0);	//first row second column
  
  //Here we aim to achieve that when hour is less than 10 than insert 0 at the first place and similar goes for minute and seconds
  if(h<10){
    lcd.print(0);
    lcd.print(h);
  }else{
    lcd.print(h);
  }
  lcd.print(':');
  if(m<10){
    lcd.print(0);
    lcd.print(m);
  }else{
    lcd.print(m);
  }
  lcd.print(':');
  if(s<10){
    lcd.print(0);
    lcd.print(s);
  }else{
    lcd.print(s);
  }
  
  //flag value determines am or pm
  if(flag==0) lcd.print(" AM");
  if(flag==1) lcd.print(" PM");
  delay(987);
  
  //append the seconds by 1 
  s=s+1;
  
  //depeding on the seconds value change minute and hour
  if(s==60){
  	s=0;
  	m=m+1;	//when s reaches 60 increase the minute
  }
  if(m==60){
  	m=0;
  	h=h+1;	//when minute reaches 60 increase the hour
  }
  if(h==13){
  	h=1;	//when hour reaches 13 h=1 and flag changes
  	flag=flag+1;
 	if(flag==2)
   		flag=0;
  }

  
}