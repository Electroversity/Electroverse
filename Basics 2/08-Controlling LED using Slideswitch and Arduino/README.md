<h1>Controlling LED using Slideswitch and Arduino</h1>

<div>
  <img width=450 align=right src="https://github.com/Electroversity/Electroverse/blob/main/Basics%202/08-Controlling%20LED%20using%20Slideswitch%20and%20Arduino/circuit.jpg">
  <p>Here we'll control the LED using a slideswitch. 
  </p>
  <p>If the switch is ON, the LED will be ON and if the switch is OFF, then the LED will be OFF. The mode (voltage level) of the switch is read by pin 12 and the Arduino takes action according to the code.<br><br>
    
  </p>
  
  <h3>Components Required</h3>
  <ol>
    <li>LED</li>
    <li>Resistor 200Ω</li>
    <li>Slideswitch</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
</div>
<br>
  
## CODE
```C++
int val = 0;

void setup()
{
  pinMode(12, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  val = digitalRead(12);
  if (val == LOW) 
  {
    digitalWrite(13, LOW);
  }
  else 
  {
    digitalWrite(13, HIGH);
  }
}
```
