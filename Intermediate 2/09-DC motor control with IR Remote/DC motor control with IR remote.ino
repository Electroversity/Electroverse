#include <IRremote.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,7,6,4,13);

//-----------Motor Driver----------
#define enA_in1 8
#define enA_in2 10
#define enA 9

#define enB_in1 2 
#define enB_in2 3
#define enB 5

int speed = 100;
//-----------IR Sensor-------------

IRrecv irrecv(0);
decode_results results;
//---------------------------------

void setup(){
  lcd.begin(16,2);
  lcd.print("LET'S GO");
  
  Serial.begin(9600);
  irrecv.enableIRIn();
  
  pinMode(enA_in1,OUTPUT);
  pinMode(enA_in2,OUTPUT);
  pinMode(enB_in2,OUTPUT);
  pinMode(enB_in1,OUTPUT);
  pinMode(enA,OUTPUT);
  pinMode(enB,OUTPUT);
}

void loop(){
  if(irrecv.decode(&results)){
    //long int decCode = results.value;
    //Serial.print(results.value);
    
    switch (results.value){
      case 16580863://Power
      	lcd.clear();
      break;
      case 16615543://Button 2	- Moving Forward
      	move_forward();
      	lcd.clear();
      	lcd.setCursor(0,0);
      	lcd.print("Lm + |Rm +");	//left motor and right motor forward
      	lcd.setCursor(3,1);
      	lcd.print("FORWARD !");
      break;
      
      case 16591063://Button 4	- Moving Left
      	move_left();
      	lcd.clear();
      	lcd.setCursor(0,0);
      	lcd.print("Lm - |Rm +");	
      	lcd.setCursor(3,1);
      	lcd.print("Turn Left !");
      break;
      
      case 16623703://Button 5	- Stop
      	stop();
      	lcd.clear();
      	lcd.setCursor(0,0);
      	lcd.print("Lm 0 |Rm 0");	
      	lcd.setCursor(3,1);
      	lcd.print("Stop !");
      break;
      
      case 16607383://Button 6	- Moving Right
      	move_right();
      	lcd.clear();
      	lcd.setCursor(0,0);
      	lcd.print("Lm + |Rm -");	
      	lcd.setCursor(3,1);
      	lcd.print("Turn Right !");
      	break;
      
      case 16586983://Button 7	- Reduce Speed
      	reduce_speed();
      	lcd.clear();
      	lcd.setCursor(0,0);
      	lcd.print("Lm dec |Rm dec");	
      	lcd.setCursor(3,1);
      	lcd.print("Speed Down");
      break;
      
      case 16619623://Button 8	- Moving Backward
      	move_backward();
      	lcd.clear();
      	lcd.setCursor(0,0);
      	lcd.print("Lm - |Rm -");	
      	lcd.setCursor(3,1);
      	lcd.print("Backward !");
      break;
      
      case 16603303://Button 9	- Increase Speed
      	increase_speed();
      	lcd.clear();
      	lcd.setCursor(0,0);
      	lcd.print("Lm inc |Rm inc");	
      	lcd.setCursor(3,1);
      	lcd.print("Speed Up");
      break;
      
    }
    irrecv.resume();
  }
 
}

void move_forward(){  
  Serial.println("Forward");
  analogWrite(enA,speed);
  analogWrite(enB,speed);
  //Right Motor
  digitalWrite(enA_in2,LOW);
  digitalWrite(enA_in1,HIGH);
  
  //Left Motor
  digitalWrite(enB_in1,HIGH);
  digitalWrite(enB_in2,LOW);
}

void move_backward(){
  Serial.println("Backward");
  analogWrite(enA,speed);
  analogWrite(enB,speed);
  
  //Right Motor
  digitalWrite(enA_in2,HIGH);
  digitalWrite(enA_in1,LOW);
  
  //Left Motor
  digitalWrite(enB_in2,HIGH);
  digitalWrite(enB_in1,LOW);
}

void move_left(){
  Serial.println("Turning Left");
  analogWrite(enA,speed);
  analogWrite(enB,0);
  
  //Right Motor
  digitalWrite(enA_in1,HIGH);
  digitalWrite(enA_in2,LOW);
  
  //Left Motor
  digitalWrite(enB_in2,LOW);
  digitalWrite(enB_in1,LOW);
}
void move_right(){
  Serial.println("Turning Right");
  analogWrite(enB,speed);
  analogWrite(enA,0);
  
  //Right Motor
  digitalWrite(enA_in1,LOW);
  digitalWrite(enA_in2,LOW);
  
  //Left Motor
  digitalWrite(enB_in1,HIGH);
  digitalWrite(enB_in2,LOW);
}

void stop(){
  Serial.println("Stop");
  digitalWrite(enA_in1,LOW);
  digitalWrite(enA_in2,LOW);
  
  digitalWrite(enB_in1,LOW);
  digitalWrite(enB_in2,LOW);
}

void reduce_speed(){
  Serial.println("low");
  speed = speed - 10;
  if(speed < 0) speed = 0;
  digitalWrite(enA,speed);
  digitalWrite(enB,speed);
}
void increase_speed(){
  Serial.println("High");
  speed = speed + 10;
  if(speed > 255) speed = 255;
  digitalWrite(enA,speed);
  digitalWrite(enB,speed);
}



