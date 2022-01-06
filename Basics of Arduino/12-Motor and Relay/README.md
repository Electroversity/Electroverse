<h1>DC Motor and Relay</h1>

<div>
    <img width=500 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%20of%20Arduino/07-Servo%20Motor/Servo%20motor.png">
    <p>A servo is an actuator that rotates to a precise angle through command. The servo example included in this rotates between 0 to 180 degree. It can move to any angle between 0 to 180 degrees.<br><br>
      A servo receives the command from the arduino, moves the commanded angle and stops there. Servo has three pin interface:
      <ol>
        <li>Brown: GND</li>
        <li>Red: 5V</li>
        <li>Orange: Signal Input</li>
      </ol>
  Have Fun !</p>
    
  <h3>Components Required</h3>
  <ol>
    <li>1x Servo Motor</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE
```C++

const int motor = 2;

void setup(){
  pinMode(motor,OUTPUT);
}

void loop(){
  digitalWrite(motor,HIGH);
  delay(1000);
  digitalWrite(motor,LOW);
  delay(1000);
}


```
