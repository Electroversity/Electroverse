<h1>Potentiometer control - Opposite Effect</h1>

<div>
    <img width=450 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%202/04-Potentiometer%20control%20of%202%20Leds/potentiometer%20control.png">
    <p>In this program what we are doing is trying to display an opposite effect on Leds with a potentiometer control over them. Now by opposite effect we mean to display that when potentiometer reaches maximum value one of the led glows while the other dims out completely.<br><br>
        Make sure to remember the pins of Potentiometer i.e.,</p>
</div>       
 
 
| Terminal 1 | Wiper | Terminal 2 |
| --- | --- | --- |
| (+) | Analog Input | (-) |
      
Have Fun !

<div>
  <h3>Components Required</h3>
  <ol>
    <li>2x LEDs</li>
    <li>2x Resistor of 1k ohms connected to LEDs</li>
    <li>1x Potentiometer</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE
```C++
const int analog_pot = A1;
const int LED1 = 6;
const int LED2 = 7;
int inputVal = 0;

void setup() {
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
}

void loop() {
  inputVal = analogRead(analog_pot);
  analogWrite(LED1, inputVal/4);
  analogWrite(LED2, (1023-inputVal)/4);		
  //to display the opposite effect since the maximum value of analogread reaches 1023
  
}

```
