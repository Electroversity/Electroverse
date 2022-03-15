<h1>Displaying value of force using LCD</h1>

<div>
    <img width=650 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%202/10-Displaying%20value%20of%20force%20using%20LCD/force.gif">
    <p>The following circuit represents a Force sensor which is being giving the value of force as input ,which is displayed on the LCD.<br><br> 
  </p>
    <p>Have Fun !</p>
</div>       
 
<div>
  <h3>Components Required</h3>
  <ol>
    <li>1x LCD</li>
    <li>2x Resistor 220 ohm</li>
    <li>1x Force sensor</li>
    <li>1x Potentiometer</li>
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

<b>Displaying the important part of the code</b>

```C++
void loop()                                      
{
  Force_VAL = analogRead(A0);
  Serial.println(Force_VAL);
  
  lcd.setCursor(0,1);
  lcd.print(Force_VAL);

 if (Force_VAL > 500)
 {
    digitalWrite(10, HIGH);
  } 
else
 {
    digitalWrite(10, LOW);
  }
 delay(10); // Delay a little bit to improve simulation performance
}
```

