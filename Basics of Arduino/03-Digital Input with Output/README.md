<h1>Digital Input with Output</h1>

<div>
  <img width=450 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%20of%20Arduino/03-Digital%20Input%20with%20Output/Digital%20Input%20with%20Output.png">
  <p>Here the digital signal can be generated manually using a push button switch.<br>
    A push button switch is a switch which provides connectivity between its terminals when pressed. When the button is released terminals gets disconnected.<br>
  Have Fun !</p>
  
  <h3>Components Required</h3>
  <ol>
    <li>LED</li>
    <li>Resistor 1k</li>
    <li>Resistor 10k</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
</div>
<br>
  
## CODE
```C++
const int led=3;

void setup(){
	pinMode(led, OUTPUT);
}

void loop(){
  for(int brightness=1;brightness<=255;brightness++){
    analogWrite(led,brightness);
    delay(10);
  }
  for(int brightness=255;brightness>0;brightness--){
  	analogWrite(led,brightness);
    delay(10);
  }
}
```
