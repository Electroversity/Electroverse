<h1>Obstacle Avoidance robot using 2 Gear Motors</h1>

<div>
  <img width=650 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Intermediate%201/05-Resistance%20Meter/resistance%20meter.png">
  <p>Here we wish to determine the resistance of an unknown resistor using the Voltage Divider Network formula which gives out the value of unknown resistance.</p><br>
     
  <p>Have Fun</p>
  
  <h3>Components Required</h3>
  <ol>
    <li>1x LCD Display</li>
    <li>4x Resistor 220Ω</li>
    <li>HCSR04 ultrasonic sensor</li>
    <li>2x gear motors</li>
    <li>1x L293D motor driver</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
</div>



<h2>CODE</h2>
<p><b>Important part of the code.</b> Make sure to refer the .ino file provided !</p>

```C++
  //-------Configuration of Ultrasonic Sensor---------
  long duration;
  float Front_dist;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(20);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  Front_dist = (duration * 0.03444)/2;
  //inch = (Front_dist/2.54);
 //---------------------------------------------------
  analogWrite(enable_right, 255);
  analogWrite(enable_left, 255);
  
  if(Front_dist<50){
    digitalWrite(forward_led,HIGH);
    digitalWrite(backward_led,HIGH);	//red led
    stop();
    delay(100);
    digitalWrite(forward_led,LOW);
    backward();
    delay(100);
    digitalWrite(right_led,HIGH);		//blue led
    right();
    delay(100);
    digitalWrite(right_led,LOW);
    digitalWrite(left_led,HIGH);		//orange led
  }else{
    digitalWrite(forward_led,HIGH);		//green led
    digitalWrite(backward_led,LOW);
    digitalWrite(right_led,LOW);
    digitalWrite(left_led,LOW);
    forward();
  }
```
