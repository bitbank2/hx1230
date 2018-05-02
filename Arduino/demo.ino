//
// HX1230 Demo Program
// Measures the time to fill the display
// and displays it for 4 seconds as a FPS measurement
//
#include <hx1230.h>

void setup() {
  // put your setup code here, to run once:
//int hx1230Init(int iReset, int iLED, int iCS, int iClock, int iData, byte bFlip180, byte bInvert)
  hx1230Init(0, -1, -1, 1, 2, 0, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
unsigned long ulTime = millis();
int i, iRate;
char szTemp[32];

  for(i=0; i<10; i++)
  {
     hx1230Fill(0xff); // alternately fill with all black and all white
     hx1230Fill(0);
  }
  ulTime = millis() - ulTime;

  iRate = (int)(200000UL / ulTime); // 10x framerate
  hx1230WriteString(0,0,"BitBank HX1230!!",FONT_SMALL, 0);
  hx1230WriteString(0,1,"Max Framerate", FONT_SMALL,0 );
  sprintf(szTemp, "** %d.%d FPS **", iRate/10, iRate % 10);
  hx1230WriteString(0,2,szTemp, FONT_SMALL, 0);
  delay(4000);
}
