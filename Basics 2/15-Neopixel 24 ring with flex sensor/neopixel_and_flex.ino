#include <Adafruit_NeoPixel.h>

#define PIN 2 

Adafruit_NeoPixel strip = Adafruit_NeoPixel(24, PIN, NEO_GRB + NEO_KHZ800);

int fsrPin=A0;
int fsrReading=0;
int num,prev_num=0;

void setup()
{
  Serial.begin(9600);
  strip.begin();
  strip.show();
}
void loop()
{
  fsrReading=analogRead(fsrPin);
  
  num=map(fsrReading,60,256,1,24);
  Serial.println("Led Number="+String(num));
  if(num!=prev_num)
  {
    switch_led(strip.Color(0,0,0),1,24);
    switch_led(strip.Color(255,50,40),50,num);
    prev_num=num;
    delay(500);
  }
}
void switch_led(uint32_t color,int time,int led_num){
  for(uint16_t i=0;i<led_num;i++){
    strip.setPixelColor(i,color);
    strip.show();
    delay(time);
  }
}
