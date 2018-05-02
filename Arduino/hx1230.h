//
// hx1230 LCD display library
// written by Larry Bank
// Copyright (c) 2018 BitBank Software, Inc.
// converted from Linux 5/2/2018
//
#define FONT_NORMAL 0
#define FONT_SMALL 1
#define FONT_LARGE 2

//
// Uncomment this define to allow the pixel functions to work
// It requires an extra 864 bytes of memory (a lot on Arduinos)
//
// #define BACKING_RAM

//
// Load a 96x68 1-bpp Windows bitmap
//
int hx1230LoadBMP(byte *pBMP);
//
// Power up the display
//
void hx1230PowerUp(void);
//
// Set the display into low power mode
//
void hx1230PowerDown(void);
//
// Initializes the LCD controller into "horizontal write mode"
// Parameters: GPIO pin numbers used for the CLK/DIN/DC/RST/LED control lines
// If not using the LED backlight or chip select, set them to -1
//
void  hx1230Init(int iReset, int iLED, int iCS, int iClock, int iData, byte bFlip180, byte bInvert);
//
// Fill the display with a byte pattern
//
void hx1230Fill(byte pattern);

//
// Fill the display with a byte pattern
//
void hx1230Fill(byte pattern);
//
// Enable and power up the LCD
//
void hx1230PowerUp(void);
//
// Controls the LED backlight
//
void hx1230Backlight(int bOn);
//
// Set the contrast value (0 = min, 15 = max)
//
int hx1230SetContrast(unsigned char ucContrast);
//
// Set (or clear) an individual pixel
// The local copy of the frame buffer is used to avoid
// reading data from the display controller
//
int hx1230SetPixel(int x, int y, unsigned char ucColor);
//
// Read the pixel at the given x,y
// if the library is not initialized, or the coordinates are
// not within the valid range, it returns 0
//
int hx1230GetPixel(int x, int y);
//
// Draw a string of normal (8x8), small (6x8) or large (16x24) characters
// At the given col+row
//
int hx1230WriteString(int x, int y, char *szMsg, int bInverted, int iSize);


