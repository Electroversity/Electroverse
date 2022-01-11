#include <Adafruit_NeoPixel.h>

#define PIN 13 
// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(48, PIN, NEO_GRB + NEO_KHZ800);

int sine[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47}; //these are the pixels in order of animation-- 48 pixels in total
int pot = A0;
int minSpeed = 100; // put a high value
int maxSpeed = 10;  // put a low value

void setup() {
  strip.begin();
  //strip.setBrightness(90); //adjust brightness here
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
for(int i=0; i<48; i++) { 
    strip.setPixelColor(sine[i], strip.Color(60, 30, 0)); //change RGB color value here
    int valPot = analogRead(pot);
    int speed = map(valPot, 0, 1023, minSpeed, maxSpeed);
    delay(speed);
    for (int j=0; j<25; j++){
        strip.setPixelColor(sine[(j+i+1)%48], strip.Color(10, 10, 10));
        }
    strip.show(); 
      }      
}
