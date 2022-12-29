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
		if (i == 1)
			return g;
		if (i == 2)
			return b;
		throw InvalidColourIndex();
	}
	
	void print(){
		std::cout << "(" << r << "," << g << "," << b << ")";
	}
	
	friend std::ostream & operator<< ( std::ostream& s, const ColourRGB& v){
		 s << "(" << v.r << "," << v.g << "," << v.b << ")";
		 return s;
	}
	
	void setRGB(int r, int g, int b){
			this->r = r;
			this->g = g;
			this->b = b;
	}
	
	int r,g,b;
};

#endif