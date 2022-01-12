<h1>Displaying long texts using LCD</h1>

<div>
    <img width=650 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%202/06-Displaying%20long%20texts%20using%20LCD/lcd.gif?raw=true">
    <p>The following circuit represents a long text or we can say paragraph which is displayed on the LCD.<br><br> 
  </p>
    <p>Have Fun !</p>
</div>       
 
<div>
  <h3>Components Required</h3>
  <ol>
    <li>1x LCD</li>
    <li>1x Resistor 220 ohm</li>
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

##CODE
void loop() {                                                         //important part of the code
  lcd.home();
  // Get 16 characters so that we can display on the LCD
  toShow = message.substring(ii,ii+16);
  // print the number of seconds since reset:
  lcd.print(toShow);
  ii = ii + 2;
  // We have to reset ii after there is less text displayed.
  if(ii>(strLength-16)) {
    ii = 0;
   }

  delay(500);
}
