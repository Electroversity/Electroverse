<h1>Staircase Lighting using PIR</h1>

<div>
    <img width=600 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Intermediate%201/03-Room%20Lighting%20using%20PIR/lighting.gif">
    <p>The following is an attempt to interface PIR or Passive Infrared sensor with a Bulb indicating an <i>automatic staircase lighting system</i> where we detect any movement with the help of PIR sensor and accordingly glow the Bulb while no glow would be observed when no movement is detected.<br></br>The detection is further printed on to the serial monitor as displayed in the gif.</p>
    
  <h3>PIR configuration</h3>
  
  | Signal | Power | Ground |
  | --- | --- | --- |
  | Digital Pin | + | - |

   <b>Just to remind you the configuration for LCD</b>
   
| GND | VCC | VEE | RS | RW | E | D0 | D1 | D2 | D3 | D4 | D5 | D6 | D7 | LED+ | LED- | 
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | 
| GND | VCC | Contrast Adj | Register Select(Digital pin) | Read Write(GND) | Data Enable(Digital pin) | D0 | D1 | D2 | D3 | D4(Digital Pin) | D5(Digital Pin) | D6(Digital Pin) | D7(Digital Pin) | LED+ | LED-(Use a Resistor) | 
    
  <img width=700 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Intermediate%201/03-Room%20Lighting%20using%20PIR/connection.png">  
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
    
</div><br>
  
<h2>CODE</h2>

<b>Important part of the code</b>

```C++

val = digitalRead(sensor);
  
  if(val==HIGH){
    digitalWrite(bulb,HIGH);
    delay(3000);        //3s because we want to give the user sometime to look into the stairs as well
    if(state==0){
      lcd.setCursor(0,0);
      lcd.print("Lights ON!");
      state=1;
    }
  }else{
    digitalWrite(bulb,LOW);
    delay(1000);
    if(state==1){
      lcd.setCursor(0,0);
      lcd.print("Lights OFF!");
      state=0;
    }
  }

```
