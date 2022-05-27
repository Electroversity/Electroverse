
<h1>Smart irrigation system</h1>

<div>
    <img width=600 align=right src="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/08-Smart%20irrigation%20system/water%20system.gif">
    <p>The following is an attempt to interface temperature sensor and DC motor with a LCD indicating an <i>Smart irrigation system</i> where the temperature sensor detects the temperature of the soil and then accordingly the DC motor comes in act to supply the water to the soil,Here we used H-bridge motor drive  to control the flow of current to a load for DC motor.<br>
  
   Have Fun !
  
  
  
  </p>
    
  
  
  
  
  
  <b>Just to remind you the configuration for LCD</b>
   
| GND | VCC | VEE | RS | RW | E | D0 | D1 | D2 | D3 | D4 | D5 | D6 | D7 | LED+ | LED- | 
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | 
| GND | VCC | Contrast Adj | Register Select(Digital pin) | Read Write(GND) | Data Enable(Digital pin) | D0 | D1 | D2 | D3 | D4(Digital Pin) | D5(Digital Pin) | D6(Digital Pin) | D7(Digital Pin) | LED+ | LED-(Use a Resistor) | 
    
  <img width=500 align=right src="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/08-Smart%20irrigation%20system/connections.png">  
  <h3>Components Required</h3>
  <ol>
    <li>1x DC motor</li>
    <li>1x H-bridge motor drive</li>
    <li>1x LCD</li>
    <li>1x TMP36 temperature sensor</li>
    <li>1x potentiometer</li>
    <li>1x Resistor 1 kohm</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div><br>
  
<h2>CODE</h2>

<b>Important part of the code</b>

```C++

void loop()
{

  lcd.print("");
  degree=analogRead(0);
  realdegree=(double)degree/1024;
  realdegree*=5;
  realdegree-=0.5;
  realdegree*=100;
  lcd.setCursor(0,1);
  if(realdegree<30)
  {
    digitalWrite(9,HIGH);
    digitalWrite(8,HIGH);
  }
   if(realdegree>45)
  {
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
  }
  String output=String(realdegree)+String((char)178)+"C";
  lcd.print(output);
}

```

