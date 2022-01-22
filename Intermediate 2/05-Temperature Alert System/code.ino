#include <LiquidCrystal.h> 

const int hot = 70; 
const int cold = 60; 
LiquidCrystal lcd(7, 6, 5, 4, 3, 2); 

void setup() 
{
  pinMode(A2, INPUT); //sensor
  pinMode(9, OUTPUT); //red
  pinMode(10, OUTPUT); //green
  pinMode(11, OUTPUT); //yellow
  Serial.begin(9600);
  lcd.begin(16, 2);
}
void loop() 
{
    //read the analog pin 
    int sensor = analogRead(A2);
  	//calibration
    float voltage = (sensor / 1024.0) * 5000;
    float tempC = (voltage - 500) / 10;
    float tempF = (tempC * 1.8) + 32;
    //print the temperature
    Serial.print("Temp: ");
    Serial.print(tempC);
  	Serial.print(" degree C");
  
  	lcd.clear();
  
    if (tempC < cold) 
    { //cold
      	lcd.setCursor(1,0);
      	lcd.print("Low Temp");
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, HIGH);
        Serial.println(" Temp less than 60");
    }
    else if (tempC > hot) 
    { //hot
     	lcd.clear();
      	lcd.setCursor(1,0);
      	lcd.print("High Temp!");
        digitalWrite(9, HIGH);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
        Serial.println(" Temp more than 70");
    }
    else 
    { //desired
      	lcd.clear();
      	lcd.setCursor(1,0);
      	lcd.print("Desired Temp :)");
        digitalWrite(9, LOW);
        digitalWrite(10, HIGH);
        digitalWrite(11, LOW);
        Serial.println(" Temp between 60 and 70");
	}
	delay(300);
}