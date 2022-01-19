#include <IRremote.h>		//library to send and receive IR signals

const int led_red = 6;
const int led_green = 5;
const int led_blue = 4;

int ir_sensor = 12;
int val;

IRrecv irrecv(ir_sensor);	//helps to receive infrared signals from IR sensors
decode_results results;		//the command allows us to decode the input received

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();		//allows IR sensor to receive input from IR remote
  pinMode(led_red,OUTPUT);
  pinMode(led_green,OUTPUT);
  pinMode(led_blue,OUTPUT);
}

void loop(){
  //decoding infrared input
  if(irrecv.decode(&results)){			//this checks if the code has been received
    long int decCode = results.value;
    Serial.print(results.value);
    
    /*If the IR sensor can decode the input signal, we enter the
    switch case statement to control the LEDs using IR Remote
    */
    
    switch (results.value){
      case 16582903: //when you press the 1 button
      	Serial.println("-Red LED HIGH");
        digitalWrite(led_red, HIGH);
        break;    
      case 16615543: //when you press the 2 button
        Serial.println("-Red LED LOW");
        digitalWrite(led_red, LOW);    
        break;
      case 16599223: //when you press the 3 button
      	Serial.println("-Green LED HIGH");
        digitalWrite(led_green, HIGH);
        break;            
      case 16591063: //when you press the 4 button
      	Serial.println("-Green LED LOW");
        digitalWrite(led_green, LOW);
        break;        
      case 16623703 : //when you press the 5 button
      	Serial.println("-Blue LED HIGH");
        digitalWrite(led_blue, HIGH);
        break;        
      case 16607383: //when you press the 6 button
      	Serial.println("-Blue LED LOW");
        digitalWrite(led_blue, LOW);
        break;
    }
    irrecv.resume();		//receive the next value
    Serial.println();
  }
  delay(10);
}