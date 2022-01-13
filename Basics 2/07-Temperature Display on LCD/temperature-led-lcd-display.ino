#include <LiquidCrystal.h>  //included the library

const int blue_led = 8;
const int white_led = 7;
const int red_led = 6;

int temp = A1;              //TMP 36 pin
int tempsensor_val;

LiquidCrystal lcd(12,11,5,4,3,2);   //lcd pins 

void setup(){
    Serial.begin(9600);         //defined the baud rate
    lcd.begin(16,2);            //for lcd
    pinMode(red_led,OUTPUT);
    pinMode(blue_led,OUTPUT);
    pinMode(white_led,OUTPUT);
}

void loop(){
    tempsensor_val = analogRead(temp);
    
    float celsius = map(((tempsensor_val-20)*3.04),0,1023,-40,125);     //converted the value to celsius
    float fahrenheit = (9*(celsius)/5)+32;

    /*We got the values for celsius and fahrenheit, now we wish to add a warning(by glowing different LEDs)
    depending on the values and then display it on to LCD
    */
    lcd.setCursor(0,0);
    lcd.print("C:");
    lcd.print(celsius);

    lcd.setCursor(0,1);
    lcd.print("F:");
    lcd.print(fahrenheit);
	
  	lcd.setCursor(9,0);
  	
    if(celsius<-10){           					//System is Too Cold  
      	very_cold_system();
		lcd.print("!COLD!");
    }else if(celsius>60){      					//System at Very High Temperature
        very_hot_system();
      	lcd.print("!HOT!");
      	lcd.setCursor(14,0);
      	lcd.print(" ");
    }else if((celsius>=-10) && (celsius<=60)){   //System at normal conditions
        normal_system();
      	lcd.print("Normal");
    }else {
    }
   
    //Serial.println(celsius);
    //Serial.println(fahrenheit);
	
}

//LED warning depending on Temp values

void very_cold_system(){
    Serial.println("ALERT !! Very Cold");
    digitalWrite(red_led,LOW);
    digitalWrite(blue_led,HIGH);
    digitalWrite(white_led,LOW);
}
void normal_system(){
    Serial.println("System - NORMAL");
    digitalWrite(red_led,LOW);
    digitalWrite(blue_led,LOW);
    digitalWrite(white_led,HIGH);
}
void very_hot_system(){
    Serial.println("ALERT !! Too Hot");
    digitalWrite(red_led,HIGH);
    digitalWrite(blue_led,LOW);
    digitalWrite(white_led,LOW);
}