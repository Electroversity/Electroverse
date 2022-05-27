<h1>Temperature Sensor</h1>

<div>
    <img width=500 align=right src="https://github.com/Electroversity/Electroverse/blob/main/Basics%201/09-Temperature%20Sensor/Temperature%20sensor.png">
    <p>A temperature sensor is a 3 pin sensor, operated on 4 to 20 volt. It gives output in voltage according to the temperature. 10 milli volts per degree Celsius is the output format of the sensor.<br><br>
        The 3 pins signify (from right to left)
      <ol>
        <li>Power</li>
        <li>Signal Input</li>
        <li>Ground</li>
      </ol>
  Have Fun !</p>
    
  <h3>Components Required</h3>
  <ol>
    <li>1x Temperature Sensor</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE
```C++

const int sensor = 1;
int input;


void setup(){
  Serial.begin(9600);
}

void loop(){
  
  //125 is the max
  //-40 is the min
  
  
  input = map(((analogRead(sensor) - 20) * 3.04), 0, 1023, -40, 125);
  /*---Working----
  	here x=(analogRead(sensor)-20)*3.04
    
    so map returns 
    
    (x-0)*(125-(-40))
    __________________ = Input
    
  	(1023-0)+(-40)
  */
  
  
  Serial.println(input);
  
}

```

## Mapping

### Syntax
```
map(value, fromLow, fromHigh, toLow, toHigh)
```
### Parameters

<ul>
    <li>value: the number to map.</li>
    <li>fromLow: the lower bound of the value’s current range.</li>
    <li>fromHigh: the upper bound of the value’s current range.</li>
    <li>toLow: the lower bound of the value’s target range.</li>
    <li>toHigh: the upper bound of the value’s target range.</li>
</ul>


```C++
long map(long x, long in_min, long in_max, long out_min, long out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
```
