<h1>Analog Output</h1>

<div>
  <img width=450 align=right src="https://github.com/Electroversity/Electroverse/blob/main/Basics%201/02-Analog%20Output/analog%20output.png">
  <p>If an Arduino is operating on 5V then an analog output can have any value between 0 volt to 5 volt. An analog signal may have 1.2V or 2.3V or any other value between 0 and 5 unlike digital output which has only two options 0 or 5volt.<br>
    An analog output in the Arduino is drawn through PWM. All pins of an Arduino marked as PWM can draw an analog output. An analog output is drawn in a range of 0 to 255.<br><br>
  Have Fun !</p>
  
  <h3>Components Required</h3>
  <ol>
    <li>LED</li>
    <li>Resistor 1k</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
</div>

  
## CODE
```C++
const int led=3;

void setup(){
	pinMode(led, OUTPUT);
}

void loop(){
  for(int brightness=1;brightness<=255;brightness++){
    analogWrite(led,brightness);
    delay(10);
  }
  for(int brightness=255;brightness>0;brightness--){
  	analogWrite(led,brightness);
    delay(10);
  }
}
```
