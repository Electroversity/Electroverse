#include <Servo.h> 

                       //Create servo object_(finger) for the 5 fingers of the robotic hand
Servo Servo_thumb; 
Servo Servo_index;
Servo Servo_middle;
Servo Servo_ring;
Servo Servo_little;

                            // Variables of the finger sensors
int thumb; 
int index;
int middle;
int ring;
int little;

void setup() {
Servo_thumb.attach(11, 500, 2500);    // Attach Servo_ object (finger) to Arduino pins
Servo_index.attach(10, 500, 2500);
Servo_middle.attach(9, 500, 2500);
Servo_ring.attach(6, 500, 2500);
Servo_little.attach(5, 500, 2500);
}

void loop() {                         // Read the finger sensors
thumb = analogRead(A0);
index = analogRead(A1);
middle = analogRead(A2);
ring = analogRead(A3);
little = analogRead(A4);
  
                                     // sensor reading: 767 = 0 °, 964 = 180 ° and create the proportion
thumb = map(thumb, 767, 964, 0, 180); 
index = map(index, 767, 964, 0, 180);
middle = map(middle, 767, 964, 0, 180);
ring = map(ring, 767, 964, 0, 180);
little = map(little, 767, 964, 0, 180);

                             // Determines the rotation of the servomotors
Servo_thumb.write(thumb); 
Servo_index.write(index);
Servo_middle.write(middle);
Servo_ring.write(ring);
Servo_little.write(little);

delay(20); 
}
