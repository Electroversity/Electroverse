
<h1> Joystick </h1>

<div>
    <img width=450 align=right src="https://github.com/yatharthagr7/Dive-into-Electronics/blob/main/Basics%201/19-Joystick/Joystick%20connections.png">
    <p>This is Joystick being connected with the arduino, the Joystick here used is  2-axis, it is also called as  Analog Joystick and is similar to two potentiometers connected together, one for the vertical movement (Y-axis) and other for the horizontal movement (X-axis).<br><br>
  Have Fun !</p>
    
  <h3>Components Required</h3>
  <ol>
    <li>1x Joystick</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>

## CODE
```C++
// Arduino pin numbers
const int SW_pin = 8; // digital pin connected to switch output
const int X_pin = 0; // analog pin connected to X output
const int Y_pin = 1; // analog pin connected to Y output

void setup() {
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(9600);
}

void loop() {
  Serial.print("Switch:  ");
  Serial.print(digitalRead(SW_pin));
  Serial.print(" | ");
  Serial.print("X-axis: ");
  Serial.print(analogRead(X_pin));
  Serial.print(" | ");
  Serial.print("Y-axis: ");
  Serial.print(analogRead(Y_pin));
  Serial.println(" | ");
  delay(200);
}

```
  





