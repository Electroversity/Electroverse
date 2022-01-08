<h1>Piezo Buzzer</h1>

<div>
    <img width=400 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%201/14-Piezo%20Buzzer/buzzer.png">
    <p>A piezo buzzer is a device that is used to generate beep sound(generally a warning or alert in embedded system). It is a two leg device where the longer leg is positive. If voltage is supplied it generates beep sound. Through analog write volume of beep can be controlled.<br><br>
      If a buzzer is switched with different time intervals it generates a melody.<br><br>
  Have Fun !</p>
    
  <h3>Components Required</h3>
  <ol>
    <li>1x Piezo Buzzer</li>
    <li>1x LED</li>
    <li>1x Resistor 1k</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE
```C++

const int buzzer = 3;

void setup(){
  pinMode(buzzer,OUTPUT);
}

void loop(){
  digitalWrite(buzzer,HIGH);
  delay(200);
  digitalWrite(buzzer,LOW);
  delay(200);
}


```
