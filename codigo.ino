
#include "robot.h"

#include <TFT_eSPI.h>        // Hardware-specific library

TFT_eSPI tft = TFT_eSPI();   // Invoke library
void setup()
{
  tft.begin();
  tft.setRotation(0);  // landscape

  tft.fillScreen(TFT_BLACK);

  // Swap the colour byte order when rendering
  tft.setSwapBytes(true);
   tft.pushImage(0, 0, 128, 160, image);

}

void loop() {
  // myGLCD.fillScreen(TFT_BLUE);
 // tft.pushImage(0, 0, 128, 160, win);
}
