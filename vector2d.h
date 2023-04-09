
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
			this->y = y;
	}
	//No need to define copy constructors, since the default ones will suffice.
	
	Vector2d operator + (const Vector2d& other){
		return Vector2d(x+other.x, y+other.y);
	}
	//Unary negation
	Vector2d operator-(){
		return Vector2d(-x,-y);
	}
	
	Vector2d operator - (const Vector2d& other){
		return Vector2d(x-other.x, y-other.y);
	}
	
	Vector2d& operator += (const Vector2d& other){
		this->x += other.x;
		this->y += other.y;
		return *this;
	}