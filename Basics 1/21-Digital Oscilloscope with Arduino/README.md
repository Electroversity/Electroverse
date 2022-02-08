<h1>Digital Oscilloscope with Arduino</h1>
<div>
    <img width=600 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%201/Digital%20Oscilloscope%20with%20Arduino/Digital%20Oscilloscope%20with%20Arduino.gif">
    <p>An instrument in which the variations in a fluctuating electrical quantity appear temporarily as a visible wave form on a display screen.<br><br>
  <p> Oscilloscope receives data from the arduino and plots the graph. Multimeter attached for instantaneous value display</p>   
  
  <h3>Components Required</h3>
  <ol>
    <li>1x Multimeter</li>
    <li>Arduino Uno</li>
    <li>Jumper Wires</li>
    <li>Oscilloscope</li>
    <li>LED</li>
    <li>Resistor</li>
  </ol>
    
  <p>Have Fun !</p>
    
</div>

## CODE
```C++

void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}

