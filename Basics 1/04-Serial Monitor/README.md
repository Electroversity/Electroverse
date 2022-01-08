<h1>Serial Monitor</h1>

<div>
    <img width=250 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%201/04-Serial%20Monitor/serial%20monitor.png">
    <p>While developing an application using an Arduino sometimes the developer is required to look in to the execution of code while the code is being executed. This is done in the form of input and output taken from the Arduino.<br><br>
Arduino has an inbuilt serial monitor that allows to take a serial input and output from an Arduino while the Arduino is still in action.<br><br>
    For this no special hardware or circuit is required.<br>
  Have Fun !</p>
  
</div>
  
## CODE
```C++

void setup(){
  Serial.begin(9600);   //Initiates the serial communication and the baud rate is 9600
  Serial.print("Hello World");
}

```
