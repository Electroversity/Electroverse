<h1>LED glow according to distance using HC-SR04</h1>

<div>
  <img width=650 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%202/09-LED%20glow%20according%20to%20distance%20using%20HC-SR04/circ_anim.gif">
  <p>Here we'll control the LEDs using the distance values we'll calculate by the help of the Ultrasonic sensor (HCR04). 
  </p>
  <a href="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%202/09-LED%20glow%20according%20to%20distance%20using%20HC-SR04/circuit.jpg">Circuit Diagram</a>
  <p> <br><br>
    
  </p>
  
  <h3>Components Required</h3>
  <ol>
    <li>HCR04 Ultrasonic sensor</li>
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
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(20);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.03444)/2;
  inch = (distance/2.54);
```
