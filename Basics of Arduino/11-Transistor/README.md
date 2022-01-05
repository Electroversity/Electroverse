<h1>Transistor</h1>

<div>
    <img width=500 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%20of%20Arduino/11-Transistor/transistor.png">
    <p>A very less current consuming devices like LED's can be controlled directly through an Arduino. Other devices can be controlled by an Arduino signal using a transistor. In such case a transistor is there between an Arduino and the device.<br><br>
        The transistor takes signals from the Arduino and controls the device as per the signals.<br>
      Here we deal with using an NPN transistor as switch.<br><br>
        <b>NPN Configuration</b>
        
        | Collector | Base | Emitter |
        | --- | --- | --- |
        
  Have Fun !</p>
    
  <h3>Components Required</h3>
  <ol>
    <li>1x Transistor</li>
    <li>1x LED</li>
    <li>2x Resistor 1k</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE
```C++

#include <Servo.h>      //including the servo library

Servo servo_1;          //naming the servo

void setup(){
  servo_1.attach(8);    //attaching the servo to digital pin 8 for signal input
}

void loop(){
  servo_1.write(45);    //rotate 45
  delay(1000);
  servo_1.write(180);
  delay(1000);
}


```
