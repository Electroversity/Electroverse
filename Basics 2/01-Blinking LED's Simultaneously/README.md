<h1>Blinking LEDs Simultaneously</h1>

<div>
    <img width=500 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%202/01-Blinking%20LEDs%20Simultaneously/LEDs.png">
    <p>Using two LEDs and both of them needs to blink on a time interval of 1 second but when one is on the other one should be off<br><br>
      Resistors used to decrease the flow of excess amount of current.
      
  Have Fun !</p>
    
  <h3>Components Required</h3>
  <ol>
    <li>2x LEDs</li>
    <li>2x Resistor of 220 ohms</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE
```C++
const int led1 = 3;
const int led2 = 5;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}
void loop(){
  glow1();
  delay(1000);
  glow2();
  delay(1000);
}
void glow1(){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
}
void glow2(){
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
}
```
