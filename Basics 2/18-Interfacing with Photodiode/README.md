<h1>Interfacing with PhotoDiode</h1>

<div>
    <img width=350 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%202/02-LEDs%20Fade%20In%20and%20Fade%20Out/led%20fade%20in%20and%20out.png">
    <p>Here we are using 2 LEDs and performing simultaneous fading in and out depending on the condition that when one fades in the other led fades out and vice versa.<br><br>
        We use "analogWrite" function over the digital pins and add the delay to see the dimming of the LEDs.
      
  Have Fun !</p><br>
    
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
