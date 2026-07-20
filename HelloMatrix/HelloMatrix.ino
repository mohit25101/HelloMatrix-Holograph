#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 4
#define CS_PIN 9

MD_Parola display = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

void setup()
{
  display.begin();
  display.setIntensity(4);

  display.displayText(
    "JAI SHREE RAM", // Text to display
    PA_CENTER,       // Center alignment
    50,              // Animation speed
    2000,            // Pause after animation (2 seconds)
    PA_SCROLL_LEFT,      // Entry effect
    PA_SCROLL_LEFT       // Exit effect
  );
}

void loop()
{
  if (display.displayAnimate())
  {
    display.displayReset();
  }
}
