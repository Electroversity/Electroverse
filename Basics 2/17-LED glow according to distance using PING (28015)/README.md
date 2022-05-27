<h1>LED glow according to distance using PING(28015)</h1>

<div>
  <img width=650 align=right src="https://github.com/Electroversity/Electroverse/blob/main/Basics%202/17-LED%20glow%20according%20to%20distance%20using%20PING%20(28015)/circ_anim.gif">
  <p>Here we'll control the LEDs using the distance values we'll calculate by the help of the Ultrasonic sensor (28015).
  </p>
  <p> <br><br>
    <a href="https://github.com/Electroversity/Electroverse/blob/main/Basics%202/17-LED%20glow%20according%20to%20distance%20using%20PING%20(28015)/circuit.jpg">Circuit Diagram</a>
  </p>
  
  <h3>Components Required</h3>
  <ol>
    <li>Ultrasonic sensor PING (28015)</li>
    <li>3x Resistor 200Ω</li>
    <li>3x LEDs</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
</div>
<br>

<h2>Code</h2>
<p><b>Important part of the code</b></p>

```C++
  long duration;
  float distance;
  digitalWrite(sensorPin, LOW);
  delayMicroseconds(2);
  digitalWrite(sensorPin, HIGH);
  delayMicroseconds(20);
  digitalWrite(sensorPin, LOW);
  pinMode(sensorPin, INPUT);
  duration = pulseIn(sensorPin, HIGH);
  distance = (duration * 0.03444)/2;
  inch = (distance/2.54);
```
