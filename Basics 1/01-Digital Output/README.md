<h1>Digital Output</h1>

<div>
  <img width=450 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%201/01-Digital%20Output/Digital%20Output.png">
  <p>A signal with respect to time has some value. In case of a digital signal it has a discrete value. Here in the arduino world a digital signal has only two options of values. The value may be ZERO or ONE. ZERO represents GND voltage level where as ONE represents HIGH voltage level.<br><br>
  In case of arduino HIGH means +5V and ZERO means GND level. Here in our circuit if the LED glows then it is giving a HIGH voltage signal and vice versa.<br><br>
  Have Fun !</p>
  
  <h3>Components Required</h3>
  <ol>
    <li>LED</li>
    <li>Resistor 1k</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
</div>

  
## CODE
```C++
const int LED = 1;

void setup(){
  pinMode(LED, OUTPUT);
}

void loop(){
  digitalWrite(LED, HIGH);
  delay(1000);
  
  digitalWrite(LED, LOW);
  delay(1000);
}
```
