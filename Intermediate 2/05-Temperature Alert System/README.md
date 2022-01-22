<h1>Temperature Alert System</h1>

<div>
  <img width=650 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Intermediate%202/04-Capacitance%20Meter/capacitance%20meter.gif">
  <p>Here we design a temperature monitoring and alert system with the help of temperature sensor, LEDs and LCD display.</p>
  <h3>Problem Statement -</h3>
  <p>Design a system to alert the personnel in an industry to maintain the equipment in a temperature rangen between 60°-70°C and turn ON the Green LED. When the temperature is high, turn ON the Red LED. For a low temperature, turn ON the Yellow LED. 
    Display the status of the alert system and temperature on a LCD.</p>
     
  
  <h3>Components Required</h3>
  <ol>
    <li>1x LCD Display</li>
    <li>1x Red LED</li>
    <li>1x Yelloe LED</li>
    <li>1x Green LED</li>
    <li>1x Temperature Sensor (TMP36)</li>
    <li>1x Resistor 220Ω</li>
    <li>1x Potentiometer 250kΩ</li>
    <li>1x LCD</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
</div>

<h3>Some Key points to look out for</h3>
<p>
  <ul>
    <li>To show the readings in SI units some calibration has been done in the code.</li>
    <li>If the temperature goes above 70°C, Red LED turns ON and other LEDs are OFF.</li>
    <li>If the temperature goes below 60°C, Yellow LED turns ON and other LEDs are OFF.</li>
    <li>If the temperature is in between 60-70°C, Green LED turns ON and other LEDs are OFF.</li>
  </ul>
</p>




<h2>CODE</h2>
<p><b>Important part of the code.</b> Make sure to refer the .ino file provided !</p>

```C++
float voltage = (sensor / 1024.0) * 5000;
float tempC = (voltage - 500) / 10;
float tempF = (tempC * 1.8) + 32;


if (tempC < cold) 
    { //cold
      	lcd.setCursor(1,0);
      	lcd.print("Low Temp");
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, HIGH);
        Serial.println(" Temp less than 60");
    }
    else if (tempC > hot) 
    { //hot
     	lcd.clear();
      	lcd.setCursor(1,0);
      	lcd.print("High Temp!");
        digitalWrite(9, HIGH);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
        Serial.println(" Temp more than 70");
    }
    else 
    { //desired
      	lcd.clear();
      	lcd.setCursor(1,0);
      	lcd.print("Desired Temp :)");
        digitalWrite(9, LOW);
        digitalWrite(10, HIGH);
        digitalWrite(11, LOW);
        Serial.println(" Temp between 60 and 70");
	}
```
