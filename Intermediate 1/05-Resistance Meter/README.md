<h1>Resistance Meter</h1>

<div>
  <img width=650 align=right src="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%201/05-Resistance%20Meter/resistance%20meter.png">
  <p>Here we wish to determine the resistance of an unknown resistor using the Voltage Divider Network formula which gives out the value of unknown resistance.</p><br>
     
  <p>Have Fun</p>
  
  <h3>Components Required</h3>
  <ol>
    <li>1x LCD Display</li>
    <li>1x Resistor 1kΩ</li>
    <li>1x Resistor 3.3kΩ</li>
    <li>1x Resistor 22kΩ(unknown resistor, you can place any value)</li>
    <li>1x Potentiometer 250kΩ</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
</div>



<h2>CODE</h2>
<p><b>Important part of the code.</b> Make sure to refer the .ino file provided !</p>

```C++
float analogV = analogRead(A0);
  //Serial.print("Value of analog is ");
  //Serial.println(analogV);
  Vout = (analogV*5)/1023;		//converting analog values to voltage.
  Serial.print("Vout is ");
  Serial.println(Vout);
  
  //Voltage Divider Network Formula
  R2 = (Vout*R1)/(Vin-Vout);
  Serial.println(R2);
  lcd.setCursor(0, 1);
  lcd.print(R2);
```
