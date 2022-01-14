<h1>PIR sensor Interface with Leds</h1>

<div>
    <img width=600 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%201/17-PIR%20sensor%20with%20LEDS/pir.gif">
    <p>The following is an attempt to interface PIR or Partial Infrared sensor with LEDS where we detect any movement with the help of PIR sensor and accordingly glow the LEDs while no glow would be observed when no movement is detected.<br></br>The detection is further printed on to the serial monitor as displayed in the gif.</p>
    
  <h3>PIR configuration</h3>
  
  | Signal | Power | Ground |
  | --- | --- | --- |
  | Digital Pin | + | - |
    
  <h3>Components Required</h3>
  <ol>
    <li>1x PIR sensor</li>
    <li>2x LED</li>
    <li>2x Resistor 220 ohms</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE

<b>Important part of the code</b>

```C++

val = digitalRead(sensor);	//reading the value from sensor
  
  /*Here additionally we are trying to detect any movement which happens
  and then further print it in the serial monitor.*/
  
  if(val==HIGH){				
    digitalWrite(leds,HIGH);        //glowing the LEDs
    delay(500);                     //adding a delay of 500ms
    if(state==0){
      Serial.println("Alert !! Movement");      //movement observed
      state=1;
    }
    
  }else{
    digitalWrite(leds,LOW);
    delay(500);
    if(state==1){
      Serial.println("Everything is Normal");
      state=0;
    }
  }

```
