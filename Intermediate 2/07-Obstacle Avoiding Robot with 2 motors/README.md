<h1>Obstacle Avoidance robot using 2 Gear Motors</h1>

<div>
   <p>Following is an attempt to create the Obstacle Avoiding robot using 2 gear motors. The front distance is being measured by the ultrasonic sensor.</p>
  
  >Note: We aren't using a servo motor to measure the right and left distance here
  
  <img width=700 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Intermediate%202/07-Obstacle%20Avoiding%20Robot%20with%202%20motors/obstacle%20avoiding.gif">
 <br>
     
  <p>Have Fun !</p>
  
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
</div><br><br>

<h3>Some key points to look out for</h3>
<p>
  <ul>
    <li>The circuit comprises of 4 different colour leds to let the user know what the robot is about to do be it move forward, backward, right or left</li>
    <li>Here we haven't used a servo motor so the robot will be always measuring the distance to an obstacle in front of it.</li>
    <li>The two gear motors are being controlled via the motor driver which is present since it can support max 2 motors.</li>
    <li>If you wish to build a 4 gear motor robot then make sure to use another motor drive for the control of the 2 new gear motors.</li>
  </ul><br>
  
  <b>Motor Driver Configuration</b>
  
  8pins above and 8 pins down
  
  | Power 1 | Input 4 | Output 4 | GND | GND | Output 3 | Input 3 | Enable 3&4 |
  | --- | --- | --- | --- | --- | --- | --- | --- |
  | Enable 1&2 | Input 1 | Output 1 | GND | GND | Output 2 | Input 1 | Power 2 |
  
</p>



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
