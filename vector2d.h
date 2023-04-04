
/* vector2d.h

   B. Bird - 01/02/2016
*/

#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>
#include <cmath>

class Vector2d{
public:
	Vector2d(){
		this->x = this->y = 0;
	}
	Vector2d(float x, float y){
			this->x = x;