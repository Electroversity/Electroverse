<h1>Room Lighting using PIR</h1>

<div>
    <img width=600 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%201/17-PIR%20sensor%20with%20LEDS/pir.gif">
    <p>The following is an attempt to interface PIR or Passive Infrared sensor with LEDS where we detect any movement with the help of PIR sensor and accordingly glow the LEDs while no glow would be observed when no movement is detected.<br></br>The detection is further printed on to the serial monitor as displayed in the gif.</p>
    
  <h3>PIR configuration</h3>
  
  | Signal | Power | Ground |
  | --- | --- | --- |
  | Digital Pin | + | - |

   <b>Just to remind you the configuration for LCD</b>
   
| GND | VCC | VEE | RS | RW | E | D0 | D1 | D2 | D3 | D4 | D5 | D6 | D7 | LED+ | LED- | 
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | 
| GND | VCC | Contrast Adj | Register Select(Digital pin) | Read Write(GND) | Data Enable(Digital pin) | D0 | D1 | D2 | D3 | D4(Digital Pin) | D5(Digital Pin) | D6(Digital Pin) | D7(Digital Pin) | LED+ | LED-(Use a Resistor) | 
    
  <h3>Components Required</h3>
  <ol>
    <li>1x PIR sensor</li>
    <li>1x LCD</li>
    <li>1x Bulb</li>
    <li>1x SPDT relay</li>
    <li>1x Resistor 220 ohms</li>
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
