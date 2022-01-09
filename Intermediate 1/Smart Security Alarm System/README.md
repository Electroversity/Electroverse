<h1>Smart Security Alarm System</h1>

<div>
    <img width=480 align=right src="https://github.com/Zayd1602/Dive-into-Electronics/blob/main/Intermediate%201/Smart%20Security%20Alarm%20System/circuit.png">
    <p>It is one which interfaces the Arduino microcontroller with all the above-mentioned components and works on the mechanism that when the Shop timings are open, then the customers may be let in without any hassle. But once the Shop timings are done i.e., once the Shop is closed, then anyone who tries to enter during these times will raise an alarm indicating theft/intrusion and the doors will immediately be shut too. The servo motors are used for playing the role of doors. The PIR sensor detects the presence of a customer trying to enter the Shop – then based on the timing, appropriate action will be taken. The Buzzer is used to create raise an alert in case of intrusion. The LCD also helps to provide & display appropriate messages at different times. The LED also indicates about Shop timing green light implies Shop is open and red implies closed. With the help of a good program (which we shall see soon) the entire system can work together well and generate a good automatic & smart security alarm system.<br><br>
        
      
  Have Fun !</p><br>
    
  <h3>Components Required</h3>
  <ol>
    <li>RGB LED</li>
    <li>2x Resistors 200Ω</li>
    <li>Potentiometer</li>
    <li>2x Servo Motors</li>
    <li>PIR sensor</li>
    <li>Piezo (buzzer)</li>
    <li>LCD Display</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE
```C++
#include <LiquidCrystal.h>
#include <Servo.h>
#define motor 6
#define buzzer 3
#define switch 12
#define green 11
#define red 10
#define pir 9
bool switch_status;
Servo servo1;
Servo servo2;
int angle=92, pir_output=0;
LiquidCrystal lcd(13, 8, 7, 5, 4, 2);
void setup()
{
pinMode(red, OUTPUT);
pinMode(motor, OUTPUT);
pinMode(green, OUTPUT);
pinMode(buzzer, OUTPUT);
servo1.attach(motor);
servo2.attach(motor);
servo1.write(angle);
servo2.write(angle);
Serial.begin(9600);
}
void loop()
{
switch_status=digitalRead(switch);
pir_output=digitalRead(pir);
if(switch_status==0) //mall open (green led on)
{
digitalWrite(green, HIGH);
digitalWrite(red, LOW);
lcd.print("We're Open :)");
if(pir_output==0)
{
servo1.write(angle);
servo2.write(angle);
}
else
{
lcd.clear();
servo1.write(0);
servo2.write(0);
lcd.print("WELCOME!");
}
}
else //mall is closed (red led on)
{
lcd.print("We're Closed :(");
lcd.clear();
digitalWrite(red, HIGH);
digitalWrite(green, LOW);
if(pir_output==1)
{
servo1.write(angle);
servo2.write(angle);
digitalWrite(buzzer, HIGH);
lcd.print("THEFT DETECTED!");
}
else
{
servo1.write(angle);
servo2.write(angle);
digitalWrite(buzzer, LOW);
lcd.print("We're Closed :(");
}
}
Serial.print("pir status: ");
Serial.print(pir_output);
Serial.print(", slideswitch status: ");
Serial.print(switch_status);
Serial.print("\n");
delay(1000);
lcd.clear();
}

```
