#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

//Display width (in pixels)
#define SCREEN_WIDTH 128 
//Display height (in pixels)
#define SCREEN_HEIGHT 32
#define OLED_RESET    -1 // Reset pin -1 if reset pin is not present

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET); //Declaring the display name (display)

void setup() {
  // initialize with the I2C addr 0x3C
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  

  // Clear the buffer.
  display.clearDisplay();
   // Scroll part of the screen
  display.setTextSize(1);
  display.setCursor(0,0);  
  display.setTextColor(WHITE);
  display.println("Hello World");
  display.println("Screen");
  display.println("Scroll Example.");
  display.display();
  display.startscrollright(0x00, 0x00);

}

void loop() {
  // put your main code here, to run repeatedly:

}
