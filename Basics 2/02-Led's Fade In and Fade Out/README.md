<h1>LEDs Fading In and Out</h1>

<div>
    <img width=350 align=right src="https://github.com/Electroversity/Electroverse/blob/main/Basics%202/02-Led's%20Fade%20In%20and%20Fade%20Out/led%20fade%20in%20and%20out.png">
    <p>Here we are using 2 LEDs and performing simultaneous fading in and out depending on the condition that when one fades in the other led fades out and vice versa.<br><br>
        We use "analogWrite" function over the digital pins and add the delay to see the dimming of the LEDs.
      
  Have Fun !</p><br>
    
  <h3>Components Required</h3>
  <ol>
    <li>2x LEDs</li>
    <li>2x Resistor of 1k ohms</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE
```C++
const int led1 = 5;
const int led2 = 4;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop(){
  for(int brightness=1; brightness <=255; brightness++){
  	analogWrite(led1,brightness);
    analogWrite(led2,255-brightness);
    delay(30);
  }
  for(int brightness=255; brightness >0; brightness--){
  	analogWrite(led1,brightness);
    analogWrite(led2,255-brightness);
    delay(30);
  }
}




```
