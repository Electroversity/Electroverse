<h1>Flex Sensor control over Servo Motor</h1>

<div>
    <img width=650 align=right src="https://github.com/Electroversity/Electroverse/blob/main/Basics%202/13-Flex%20Sensor%20with%20Servo/flex%20sensor.gif">
    <p>The following deals with the use of a 5.5cm Flex sensor which is interfaced with Servo Motor. Now, flex sensor acts as a variable resistor that varies its resistance when bent.</p><br>When the sensor is straight, this resistance is about 25k.<br><br>
    <p>Have Fun !</p>
</div>  <br><br>     
 
<b>Flex sensor Configuration: </b>

| Terminal 1 | Terminal 2(line elongated) | 
| --- | --- | 
| GND | 5v and analog pin | 

<div>
  <h3>Components Required</h3>
  <ol>
    <li>1x Flex sensor</li>
    <li>1x Servo Motor</li>
    <li>1x Resistor 47k ohms</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE

<b>Important part of the Code and the rest of the code has been provided in the .ino file</b>

```C++
  val = analogRead(sensor);     //taking value from the flex sensor
  	
  float Vflex = val * VCC / 1023.0;     //here VCC value = 5
  float Rflex = R_DIV * (VCC / Vflex - 1.0);        //here R-DIV is the resistor value i.e., 47k
  Serial.println("Resistance: " + String(Rflex) + " ohms");     //finding the resistance of flex sensor when bent
  
  // Use the calculated resistance to estimate the sensor's bend angle:
  float angle = map(Rflex, flatResistance, bendResistance, 0, 90.0);        //map(value, fromLow, fromHigh, toLow, toHigh)
  servo.write(angle);
  Serial.println("Bend: " + String(angle) + " degrees");
  Serial.println();
	
  delay(500);

```
