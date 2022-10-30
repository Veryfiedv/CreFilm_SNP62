/* colourRGB.h

   B. Bird - 01/02/2016
*/

#ifndef COLOURRGB_H
#define COLOURRGB_H

#include <iostream>

class ColourRGB{
public:
	ColourRGB(){
		setRGB(0,0,0);
	}
	ColourRGB(int r, int g, int b