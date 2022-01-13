<h1>Digital Clock using LCD</h1>

<div>
    <img width=650 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%202/07-Temperature%20Display%20on%20LCD/tempdisplay.gif">
    <p>The following circuit represents the situation of an industrial appliance where we warn the workers with the glow of LED for different temperature ranges and also further show the result on to the LCD screen.<br><br>This further helps the workers to identify the temperature and the working condition of the appliance.</p>
    <p>Have Fun !</p>
</div>       
 
<div>
  <h3>Components Required</h3>
  <ol>
    <li>1x LCD</li>
    <li>4x Resistor 220 ohm</li>
    <li>1x Potentiometer</li>
    <li>1x TMP36 temperature sensor</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div><br>

<div>
    <b>Just to remind you the configuration for LCD</b>
   
| GND | VCC | VEE | RS | RW | E | D0 | D1 | D2 | D3 | D4 | D5 | D6 | D7 | LED+ | LED- | 
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | 
| GND | VCC | Contrast Adj | Register Select(Digital pin) | Read Write(GND) | Data Enable(Digital pin) | D0 | D1 | D2 | D3 | D4(Digital Pin) | D5(Digital Pin) | D6(Digital Pin) | D7(Digital Pin) | LED+ | LED-(Use a Resistor) | 
    
    
</div>
  
## CODE

<b>Following is the important part of code that determines the increase of hour, minute and seconds</b>

```C++
    if(celsius<-10){           					//System is Too Cold  
      	very_cold_system();
		lcd.print("!COLD!");
    }else if(celsius>60){      					//System at Very High Temperature
        very_hot_system();
      	lcd.print("!HOT!");
      	lcd.setCursor(14,0);
      	lcd.print(" ");
    }else if((celsius>=-10) && (celsius<=60)){   //System at normal conditions
        normal_system();
      	lcd.print("Normal");
    }else {
    }

```
