<h1>Capacitance Meter for 1uF-4700uF</h1>

<div>
  <img width=650 align=right src="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/04-Capacitance%20Meter/capacitance%20meter.gif">
  <p>Here we deal with capacitance meter which displays the capacitance value in the LCD and we can use any value of capacitance between the range of 0uF to 4700uF.</p>
     
  
  <h3>Components Required</h3>
  <ol>
    <li>1x LCD Display</li>
    <li>1x Resistor 1kΩ</li>
    <li>1x Resistor 10kΩ</li>
    <li>1x Resistor 220Ω</li>
    <li>1x Potentiometer 10kΩ</li>
    <li>1x Capacitor 100uF</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
</div>

<h3>Some Key points to look out for</h3>
<p>
  <ul>
    <li>Here capacitor value has been taken as 100uF but you can take any value in the range between 1uf to 4700uF</li>
    <li>More the value of capacitance more it takes time to get charged and vice versa</li>
    <li>Unsigned Long - extended size variables for number storage and store 32 bits(4 bytes). They won't store negative numbers.</li>
    <li>Measure() - responsible for analog reading from A0 and then returns the value</li>
    <li>There are 2 important sets of code for first discharging and then charging the capacitor</li>
    <li>In the end the arduino can be reset to place another capacitor for measurement</li>
  </ul>
</p>

<h2>CODE</h2>
<p><b>Important part of the code.</b>Make sure to refer the .ino file provided !</p>

```C++
while(1){ 			//While(True)
    /**********DISCHARGING*************/
    pinMode(charge,INPUT);
    pinMode(discharge,OUTPUT);
    digitalWrite(discharge,LOW);
    lcd.setCursor(0,1);
    lcd.print("Discharging-");
    
  while(voltage>2.0){
    voltage=measure();
    delay(100);
    lcd.setCursor(12,1);
    answer= voltage * (99.0 / 1023.0);
    lcd.print((99-answer),0);	//representing the it gets discharged completely
    lcd.setCursor(14,1);
    lcd.print("%");
  }
    
    lcd.setCursor(0,1);
    lcd.print("                ");
    delay(1000);
    lcd.setCursor(0,1);
    lcd.print("charging-");		//representing that it's getting charged
    lcd.setCursor(13,1);
    lcd.print("%");
  
    /***************CHARGING*****************/
    pinMode(discharge,INPUT);
    pinMode(charge,OUTPUT);
    digitalWrite(charge,HIGH);
    start_timer=micros();
    
    while(measure()<648)		//measure is the analog reading
    {
      lcd.setCursor(9,1);
      lcd.print(measure()*(100.0/1023.0),1);
    }
```
