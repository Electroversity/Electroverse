<h1>Interfacing with PhotoDiode</h1>

<div>
    <img width=650 align=right src="https://github.com/Electroversity/Electroverse/blob/main/Basics%202/18-Interfacing%20with%20Photodiode/photodiode.gif">
    <p>Here we deal with interfacing a PhotoDiode with an Arduino and indicating it's different levels via led glow. Photodiodes are faster and more complex than normal PN junction diode and hence are frequently used for lighting regulation and optical communication.<br><br>
  Have Fun !</p>
    
  <h3>Components Required</h3>
  <ol>
    <li>2x LEDs</li>
    <li>2x Resistor of 220 ohms</li>
    <li>1x Resistor of 1k ohms</li>
    <li>Breadboard mini</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE
```C++
int led[2] = {8,6};	//8-RedLed, 6-GreenLed

int photoDiode = A1;
int sensor_value;

void setup(){
  for(int i=1;i<=2;i++){
    pinMode(led[i],OUTPUT);
  }
  pinMode(photoDiode,INPUT);
  Serial.begin(9600);
}

void loop(){
  sensor_value = analogRead(photoDiode);        //input from photoDiode sensor
  Serial.println(sensor_value);
  
  if(sensor_value > 80){
    digitalWrite(led[0],HIGH);	//Red is HIGH
    digitalWrite(led[1],LOW);
    Serial.print("TOO much LIGHT !!	value=");
  }else{
    digitalWrite(led[0],LOW);
    digitalWrite(led[1],HIGH);	//GREEN is HIGH
    Serial.print("Optimal Condition	value=");
  }
  delay(100);
}


```
