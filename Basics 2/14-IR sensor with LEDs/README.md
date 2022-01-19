<h1>IR sensor interface with LEDs</h1>

<div>
    <img width=650 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%202/14-IR%20sensor%20with%20LEDs/ir%20sensor%20and%20leds.gif">
    <p>Here, we deal with using IR or infrared sensor and interfacing it with leds using IR remote. An <i>IR sensor is an electronic device that measures and detects the Infrared Radiations</i>.<br>The IR remote is a wireless device acting as a transmitter that carries signals from remote to the devices it controls. It emits lights in an IR range that corresponds to specific commands.</p>
    <p>Have Fun !</p>
</div>  <br>   
 
<b>IR sensor Configuration: </b>

| Out | GND | Power | 
| --- | --- | --- |
| Digital Pin | Ground | VCC | 

<div>
  <h3>Components Required</h3>
  <ol>
    <li>1x IR sensor</li>
    <li>1x IR remote</li>
    <li>3x LED</li>
    <li>3x Resistor 220 ohms</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE

<b>Important part of the Code and the rest of the code has been provided in the .ino file</b>

```C++
  switch (results.value){
      case 16582903: //when you press the 1 button
      	Serial.println("-Red LED HIGH");
        digitalWrite(led_red, HIGH);
        break;    
      case 16615543: //when you press the 2 button
        Serial.println("-Red LED LOW");
        digitalWrite(led_red, LOW);    
        break;
      case 16599223: //when you press the 3 button
      	Serial.println("-Green LED HIGH");
        digitalWrite(led_green, HIGH);
        break;            
      case 16591063: //when you press the 4 button
      	Serial.println("-Green LED LOW");
        digitalWrite(led_green, LOW);
        break;        
      case 16623703 : //when you press the 5 button
      	Serial.println("-Blue LED HIGH");
        digitalWrite(led_blue, HIGH);
        break;        
      case 16607383: //when you press the 6 button
      	Serial.println("-Blue LED LOW");
        digitalWrite(led_blue, LOW);
        break;
    }
```
