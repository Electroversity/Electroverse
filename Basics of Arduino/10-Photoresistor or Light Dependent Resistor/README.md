<h1>Light Dependent Resistor</h1>

<div>
    <img width=400 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%20of%20Arduino/10-Photoresistor%20or%20Light%20Dependent%20Resistor/light%20dependent%20resistor.png">
    <p>An LDR or a photo resistor is a photo conductive sensor. It is a variable resistor that changes it's resistance in a proportion to the light exposed to it. It's resistance decreases with the intensity of light.<br>
     
  Have Fun !</p>
    
  <h3>Components Required</h3>
  <ol>
    <li>1x LDR</li>
    <li>Resistor 10k ohm</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>

  
## CODE
```C++
const int LDR = A1;
int input = 0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  input = analogRead(LDR);
  Serial.print("LDR value is ");
  Serial.println(input);
}

```
