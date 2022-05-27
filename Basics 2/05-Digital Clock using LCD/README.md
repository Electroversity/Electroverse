<h1>Digital Clock using LCD</h1>

<div>
    <img width=650 align=right src="https://github.com/Electroversity/Electroverse/blob/main/Basics%202/05-Digital%20Clock%20using%20LCD/clock.gif">
    <p>The following circuit represents a Digital Clock which is displayed on the LCD.<br><br> Keep in mind the program for this doesn't automaticall detects the time rather we have specified the current time and then it increases the value like a normal digital clock.</p>
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
  
## CODE

<b>Following is the important part of code that determines the increase of hour, minute and seconds</b>

```C++
//append the seconds by 1 
  s=s+1;
  
  //depending on the seconds value change minute and hour
  if(s==60){
  	s=0;
  	m=m+1;	//when s reaches 60 increase the minute
  }
  if(m==60){
  	m=0;
  	h=h+1;	//when minute reaches 60 increase the hour
  }
  if(h==13){
  	h=1;	//when hour reaches 13 h=1 and flag changes
  	flag=flag+1;
 	if(flag==2)
   		flag=0;
  }

```
