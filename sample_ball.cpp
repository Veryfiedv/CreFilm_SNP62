
/* sample_ball.cpp

   A sample program consisting of an animated ball which bounces off of the edges of the screen.


   B. Bird - 01/17/2016
*/
#include <iostream>
#include <vector>
#include <cmath>
#include <SDL2/SDL.h>
#include <SDL2/SDL2_gfxPrimitives.h>

#include "vector2d.h"
#include "colourRGB.h"

using namespace std;

static const int WINDOW_SIZE_X = 800;
static const int WINDOW_SIZE_Y = 600;


static const ColourRGB BALL_COLOURS[] = {
	ColourRGB(0,0,0),
	ColourRGB(255,0,0),
	ColourRGB(0,255,0),
	ColourRGB(0,0,255),
	ColourRGB(0,255,255),
	ColourRGB(255,0,255),
	ColourRGB(238,238,0),
	ColourRGB(204,153,225),
	ColourRGB(204,204,255)

};
static float VELOCITY []={ 400,350,300,250,200,150,150};
static const int BALL_RADIUS[]= {5,10,15,20,25,30};
class A2Canvas{
public:
	static const int CANVAS_SIZE_X = 800;
	static const int CANVAS_SIZE_Y = 600;
	static const int UNIT_X = CANVAS_SIZE_X/16;
	static const int UNIT_Y = CANVAS_SIZE_Y/20;
	 //Pixels/second

	static const int NUM_COLOURS = 7;
	
	void init_Canvas(){
		bo_lose=false;
		bo_win=false;
		start_back=false;
		for(int i=0;i<800;i++)
			for(int j=0;j<600;j++)
				get_goal[i][j]=false;
		char_position0.x=0;
		char_position0.y=390;
		wizard_position0.x=0;