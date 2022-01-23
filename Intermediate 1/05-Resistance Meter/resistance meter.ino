#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

float R1=3300;		//known resistor
float R2=0; 		//unknown resistor

int Vin=5;
float Vout=0;		//voltage accross R2 wrt ground
	

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Resistance meter");
  
  float analogV = analogRead(A0);
  //Serial.print("Value of analog is ");
  //Serial.println(analogV);
  Vout = (analogV*5)/1023;		//converting analog values to voltage.
  Serial.print("Vout is ");
  Serial.println(Vout);
  
  //Voltage Divider Network Formula
  R2 = (Vout*R1)/(Vin-Vout);
  Serial.println(R2);
  lcd.setCursor(0, 1);
  lcd.print(R2);
  
  /*
  Converting int to string and then calculating it's length 
  to place ohm accordingly
  */
  String strR2 = String(R2);
  int R2len = strR2.length();
  //Serial.println(R2len);
  int newCol = R2len + 1;
  lcd.setCursor(newCol,1);
  lcd.print("ohm");
}
 