<h1>Button controlling 3 Led's</h1>

<div>
    <img width=380 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%202/03-Button%20controlling%203%20Led's/button%20and%20led's.png">
    <p>Using led's and a button for making the led on when pressed and off when not pressed. Here, regardless of what side the resistor is placed on, it limits the amount of current that flows through LED.<br><br>
        
      
  Have Fun !</p><br>
    
  <h3>Components Required</h3>
  <ol>
    <li>2x LED's</li>
    <li>2x Resistor of 1k ohms connected to led's</li>
    <li>1x Resistor of 60k ohms connected to button</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE
```C++
const int led1 = 5;
const int led2 = 4;
const int led3 = 3;
int buttonState = 0;
int Button = 2;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(Button,INPUT);
}

void loop(){
  buttonState = digitalRead(Button);
  if(buttonState == HIGH){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
  }else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }
}

```
