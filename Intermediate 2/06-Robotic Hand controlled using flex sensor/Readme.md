<h1>Robotic hand controlled using Flex sensor</h1>

<div>
    <img width=500 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Intermediate%202/06-Robotic%20controlled%20using%20flex%20sensor/hand%20gif.gif">
    <p>The following is an attempt to interface servo motor with a Flex sensor which would help in controlling the functioning of a robotic hand fingers, where we have connected the flex sensor as an analog part of system which would provide the input for the controlling and servo motor as digital part which would act as an output,here Flex sensor controls the servo motor rotation which would be the fingers of the robotic hand.<br>
  
  <br>
  Have Fun !</p>

  
  
  <img width=500 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Intermediate%202/06-Robotic%20controlled%20using%20flex%20sensor/connections.png">  
  <h3>Components Required</h3>
  <ol>
    <li>5x Servo motor</li>
    <li>5x 10kohm resistors</li>
    <li>5x Flex sensors</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
  
### CODE:
#### Important part of the Code

```C++
void loop() {                         // Read the finger sensors
thumb = analogRead(A0);
index = analogRead(A1);
middle = analogRead(A2);
ring = analogRead(A3);
little = analogRead(A4);
  
                                     // sensor reading: 767 = 0 °, 964 = 180 ° and create the proportion
thumb = map(thumb, 767, 964, 0, 180); 
index = map(index, 767, 964, 0, 180);
middle = map(middle, 767, 964, 0, 180);
ring = map(ring, 767, 964, 0, 180);
little = map(little, 767, 964, 0, 180);

                             // Determines the rotation of the servomotors
Servo_thumb.write(thumb); 
Servo_index.write(index);
Servo_middle.write(middle);
Servo_ring.write(ring);
Servo_little.write(little);

delay(20); 
}

```
