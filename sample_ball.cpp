
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
		wizard_position0.y=390;
		wizard_position.x=50;
		wizard_position.y=330;
		char_position.x=UNIT_X;
		char_position.y=UNIT_Y;
		wizard_direction.x=cos(0);
		wizard_direction.y=sin(0);
		char_direction.x=cos(0);
		char_direction.y=sin(0);
		coin_num=0;
		ball_direction=new Vector2d[6];
		ball_direction[0]=Vector2d(cos(30*(M_PI/180.0)),sin(30*(M_PI/180.0)));
		ball_direction[1]=Vector2d(cos(60*(M_PI/180.0)),sin(60*(M_PI/180.0)));
		ball_direction[2]=Vector2d(cos(80*(M_PI/180.0)),sin(90*(M_PI/180.0)));
		ball_direction[3]=Vector2d(cos(120*(M_PI/180.0)),sin(120*(M_PI/180.0)));
		ball_direction[4]=Vector2d(cos(150*(M_PI/180.0)),sin(150*(M_PI/180.0)));
		ball_direction[5]=Vector2d(cos(180*(M_PI/180.0)),sin(170*(M_PI/180.0)));
		ball_position=new Vector2d[6];
		ball_position[0]=Vector2d(CANVAS_SIZE_X/2,CANVAS_SIZE_Y/5);
		ball_position[1]=Vector2d(CANVAS_SIZE_X/3,CANVAS_SIZE_Y/2);
		ball_position[2]=Vector2d(CANVAS_SIZE_X/4,CANVAS_SIZE_Y/2);
		ball_position[3]=Vector2d(CANVAS_SIZE_X/3,CANVAS_SIZE_Y/3);
		ball_position[4]=Vector2d(CANVAS_SIZE_X/3,CANVAS_SIZE_Y/4);
		ball_position[5]=Vector2d(CANVAS_SIZE_X/2,CANVAS_SIZE_Y/2);

		
		ball_colour_idx = 0;
	}

	void start_game(SDL_Renderer* r){
		
		init_Canvas();
		load_image(r);
		frame_loop(r);
		
	}
	void frame_loop(SDL_Renderer* r){
		start=0;
		unsigned int last_frame = SDL_GetTicks();
		unsigned int frame_number = 0;
		while(1){
			//cout << "Frame " << frame_number << endl;
			unsigned int current_frame = SDL_GetTicks();
			unsigned int delta_ms = current_frame - last_frame;
			
			SDL_Event e;
			//Handle all queued events
			while(SDL_PollEvent(&e)){
				switch(e.type){
					case SDL_QUIT:
						//Exit immediately
						return;
					case SDL_KEYDOWN:
						//e.key stores the key pressed