/**
Created by Amanda Chen on 02/28/2023
*/

#include <TFT_eSPI.h> // Graphics and font library for ILI9341 driver chip
#include <SPI.h>

#define TFT_GREY 0x5AEB // New colour

TFT_eSPI tft = TFT_eSPI();  // Invoke library


void setup(void) {
  tft.init();
  tft.setRotation(2);
}

void loop() {
  
  // Fill screen with white as background color
  tft.fillScreen(TFT_WHITE);
  
  // Set "cursor" at top left corner of display (0,0) and select font 2
  // (cursor will move to next line automatically during printing with 'tft.println'
  //  or stay on the line is there is room for the text with tft.print)
  tft.setCursor(0, 0, 2);

  // Set the font colour to be pink with no background, set to font 7
  tft.setTextColor(TFT_PINK); 
  tft.setTextFont(7);
  tft.println(520);
  tft.println(1314);

  // Set the font colour to be black, set to font 4
  tft.setTextColor(TFT_BLACK);
  tft.setTextFont(4);
  //use delays to show the texts subsequently
  delay(1000);
  tft.println("Please!");
  delay(1000);
  tft.println("Love!");
  delay(1000);
  tft.println("Yourself!");

  // Change to font 2
  tft.setTextFont(2);
  delay(1000);
  //set the font colour to be black, and the font background color to be pink
  tft.setTextColor(TFT_BLACK,TFT_PINK); 
  tft.println("It's more important");
  tft.println("than loving anyone else in the world!");
  tft.println("");
  delay(10000);
}