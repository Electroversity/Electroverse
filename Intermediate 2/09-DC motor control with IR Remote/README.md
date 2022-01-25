<h1>Obstacle Avoidance robot using 2 Gear Motors</h1>

<div>
   <p>Following is an attempt to create the Obstacle Avoiding robot using 2 gear motors. The front distance is being measured by the ultrasonic sensor.</p>
  
  >Note: We aren't using a servo motor to measure the right and left distance here
  
  <img width=700 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Intermediate%202/09-DC%20motor%20control%20with%20IR%20Remote/Dc%20motor%20control.gif">
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
    
  </ul><br>
  
  <b>Motor Driver Configuration</b>
  
  8pins above and 8 pins down

  | VCC | PWM pin | DC motor | GND | GND | DC motor | Digital Pin | PWM Pin | 
  | --- | --- | --- | --- | --- | --- | --- | --- |
  | Power 1 | Input 4 | Output 4 | GND | GND | Output 3 | Input 3 | Enable 3&4 |
  | Enable 1&2 | Input 1 | Output 1 | GND | GND | Output 2 | Input 1 | Power 2 |
  
</p>



<h2>CODE</h2>
<p><b>Since the code is a bit long you'll have to head over to <a href="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Intermediate%202/09-DC%20motor%20control%20with%20IR%20Remote/DC%20motor%20control%20with%20IR%20remote.ino">CODE !</a></p>
