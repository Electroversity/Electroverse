<h1>LDR dependent Light Bulb</h1>

<div>
    <img width=550 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%202/12-LDR%20dependent%20Light%20bulb/ldr%20bulb.png">
    <p>Here we deal with the integration of a Photoresistor or a Light dependent resistor with a light bulb. We specify a particular range for the Bulb to glow and other range to be off.<br><br>We use an SPDT to control the high power application through low power signal electronics circuits.</p><br><br>
    <p>Have Fun !</p>
</div>       
 
<b>SPDT Configuration: </b>

| NO(Normally Open) | Coil Pin | Common Pin |
| --- | --- | --- |
| NC(Normally Close) | Coil Pin | Common Pin |

<div>
  <h3>Components Required</h3>
  <ol>
    <li>1x LDR</li>
    <li>1x SPDT relay</li>
    <li>1x Light Bulb</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE



```C++
int sensorValue = 0;	//value of sensor has been initialised to be 0
int Bulb = 7;
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(Bulb,OUTPUT);
}

void loop()
{
  sensorValue = analogRead(A0);		//reading from the sensor
  Serial.println(sensorValue);		//printing the sensor value
  
  /*Determing the range of sensor to trigger the bulb to glow*/
  if (sensorValue<800){
    digitalWrite(Bulb,HIGH);
    Serial.print("Light is On - ");
  }
  else if(sensorValue>800){
  	digitalWrite(Bulb,LOW);
    Serial.print("Light is Off, It's Dark - ");
  }
  delay(100);
}

```
