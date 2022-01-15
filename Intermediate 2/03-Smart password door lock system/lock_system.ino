#include <Servo.h>

//password=1234 for operation 

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#include <Keypad.h>

const byte ROWS = 4; 
const byte COLS = 4; 

char Keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {10,9,8,7}; 
byte colPins[COLS] = {A0,A1,A2,A3}; 

Keypad kp = Keypad(makeKeymap(Keys), rowPins, colPins, ROWS, COLS);

Servo security;
void setup() {
  pinMode(6,OUTPUT);
  security.attach(13);
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("Enter the code!");
}


void loop() {
     security.write(0);
 char x1 =0, x2 =0, x3 =0, x4 =0;

    while(x1==0){
     x1= kp.getKey();
    lcd.setCursor(1, 1); 
    lcd.print(x1);}
    while(x2==0){x2= kp.getKey();
    lcd.setCursor(2, 1); 
    lcd.print(x2);}
    while(x3==0){x3= kp.getKey();
    lcd.setCursor(3, 1); 
    lcd.print(x3);}
    while(x4==0){x4= kp.getKey();
    lcd.setCursor(4, 1); 
    lcd.print(x4);}
    
 
  if(x1=='1' && x2=='2' && x3=='3' && x4=='4'){lcd.clear();
             security.write(180); 
             lcd.setCursor(4, 0);
             lcd.print("Welcome!");
             delay(1000);
             lcd.clear(); 
             lcd.print("Enter the code!");}
  
  else{tone(6,700,1000);
       delay(500);
       lcd.clear(); 
       lcd.setCursor(4, 0);
       lcd.print("Erorr!!");
       delay(1000);
       lcd.clear();
       lcd.print("Enter the code!");}
}
  
                 
  

 
