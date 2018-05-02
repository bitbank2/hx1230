HX1230
![HX1230](/hx1230.jpg?raw=true "HX1230")

Copyright(c) 2018 BitBank Software, Inc.<br>
<br>

HX1230 is a simple C library for working with the 96x68 mononchrome LCD display. 
The idea is to provide a simple interface for C programmers to make use of 
those low-cost LCD displays without having to read the data sheet or figure
out SPI programming. This particular display uses a 3-wire SPI interface
which isn't supported by the hardware SPI controller. In order to drive the
display, the digital lines need to be manually toggled in software. To access
the GPIO lines in a consistent way, I make use of my
ArmbianIO library (https://github.com/bitbank2/ArmbianIO)
<br>
To build the library, simply type 'make' in the terminal. To build the sample
app, type 'make -f make_sample'. This will build the demo executable to show
that the library is working. Press ENTER to exit the demo.
<br>

Written by Larry Bank<br>
Project started 5/1/2018<br>
bitbank@pobox.com<br>

