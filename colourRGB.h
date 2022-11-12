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
	ColourRGB(int r, int g, int b){
		setRGB(r,g,b);
	}
	//No need to define copy constructors, since the default ones will suffice.
	
	
	class InvalidColourIndex{};
	
	int& operator [] (int i){
		if (i == 0)
			return r;
		i