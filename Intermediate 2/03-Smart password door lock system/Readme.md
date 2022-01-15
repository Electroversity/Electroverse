
<h1>Smart password door lock system</h1>

<div>
    <img width=450 align=right src="https://github.com/yatharthagr7/Dive-into-Electronics/blob/main/Intermediate%202/03-Smart%20password%20door%20lock%20system/lock%20system.gif">
    <p>The following is an attempt to interface Keypad and servo motor with a LCD indicating an <i>Smart password door lock system</i> where we enter the value of passcode from the keypad and LCD gives the direction and display whether the passcode is correct or not ,if the passcode is correct Servo motor comes in act as an actuator for opening the lock of the door and if the passcode is incorrect then buzzer comes in act and LCD displays Error!.<br><p>
    
  
  
  
  <b>Just to remind you the configuration for LCD</b>
   
| GND | VCC | VEE | RS | RW | E | D0 | D1 | D2 | D3 | D4 | D5 | D6 | D7 | LED+ | LED- | 
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | 
| GND | VCC | Contrast Adj | Register Select(Digital pin) | Read Write(GND) | Data Enable(Digital pin) | D0 | D1 | D2 | D3 | D4(Digital Pin) | D5(Digital Pin) | D6(Digital Pin) | D7(Digital Pin) | LED+ | LED-(Use a Resistor) | 
    
  <img width=350 align=right src="https://github.com/yatharthagr7/Dive-into-Electronics/blob/main/Intermediate%202/03-Smart%20password%20door%20lock%20system/connections.png">  
  <h3>Components Required</h3>
  <ol>
    <li>1x Servo motor</li>
    <li>1x Keypad</li>
    <li>1x LCD</li>
    <li>1x Piezo buzzer</li>
    <li>1x potentiometer</li>
    <li>1x Resistor 220 ohms</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div><br>
  
<h2>CODE</h2>

<b>Important part of the code</b>

```C++

void loop() {
     security.write(0);
 char x1 =0, x2 =0, x3 =0, x4 =0;                                         

    while(x1==0){                                           //taking the input of the passcode from the keypad
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
    
 
  if(x1=='1' && x2=='2' && x3=='3' && x4=='4')              //here you specify the passcode 
             {lcd.clear();
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

```
