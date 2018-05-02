//
// HX1230 LCD display test program
//
// Written by Larry Bank 5/2/2018
//
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <hx1230.h>

int main(int argc, char* argv[])
{
int rc;
int x;

	// RESET, LED, CS, CLOCK, DATA, bFlip180, bInvert
	rc = hx1230Init(11, -1, -1, 15, 13, 0,0);
	if (rc != 0)
	{
		printf("Problem initializing hx1230 library\n");
		return 0;
	}
	hx1230Backlight(1);
	hx1230WriteString(20, 0, "Another", FONT_NORMAL, 0);
	hx1230WriteString(20, 1, "BitBank", FONT_NORMAL, 0);
	hx1230WriteString(12, 2, "FOSS tool", FONT_NORMAL, 0);
	hx1230WriteString(15, 3, "Narrow Font", FONT_SMALL, 0);
	hx1230WriteString(16, 5, "BIG!", FONT_LARGE, 0);
	// draw a box around the whole display
	for (x=0; x<30; x++)
	{
		hx1230SetPixel(x, 29-x, 1);
		hx1230SetPixel(95-x, 29-x, 1);
	}
	getchar(); // wait for user to press enter to quit
	hx1230Backlight(0);
	hx1230PowerDown();

   return 0;
} /* main() */
