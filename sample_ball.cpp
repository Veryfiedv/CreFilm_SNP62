
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
						handle_key_down(e.key.keysym.sym);
						break;
					case SDL_MOUSEMOTION:
						//e.motion contains the relevant mouse position information			
						handle_mouse_moved(e.motion.x,e.motion.y);
						break;
					case SDL_MOUSEBUTTONDOWN:
						//e.button contains the relevant mouse position and button information
						handle_mouse_down(e.button.x,e.button.y,e.button.button);
						break;
					case SDL_MOUSEBUTTONUP:	
						if(bo_win||bo_lose){
						start_game(r);
						return;
						}
						handle_mouse_up(e.button.x,e.button.y,e.button.button);
						break;
					default:
						break;
				}
			}

			draw(r,delta_ms);
			
			last_frame = current_frame;
			frame_number++;
			
		}
		
	}
private:
	void intro(SDL_Renderer* r){
		SDL_Rect SrcRect={0,0,CANVAS_SIZE_X,CANVAS_SIZE_Y};
		SDL_Rect TargetRect={0,0,CANVAS_SIZE_X,CANVAS_SIZE_Y};
		SDL_RenderCopy(r,background,&SrcRect,&TargetRect);
		
		if(wizard_position0.x>CANVAS_SIZE_X){
			wizard_position0.x=0;
			char_position0.x=0;
		}
		Vector2d new_position = char_position0 + position_delta*char_direction;
		SDL_Rect SrcRect0={0,127,34,38};
		SDL_Rect SrcRect1={48,127,34,38};
		SDL_Rect SrcRect2={96,127,34,38};
		SDL_Rect SrcRect3={144,127,34,38};		
		char_position0=new_position;
		SDL_Rect TargetRect1={char_position0.x,char_position0.y,65,65};
		if(coin_num<VELOCITY[6]*10){
			SDL_RenderCopy(r,character,&SrcRect3,&TargetRect1);
		}else if(coin_num<VELOCITY[6]*20){
			SDL_RenderCopy(r,character,&SrcRect2,&TargetRect1);
		}else if(coin_num<VELOCITY[6]*30){
			SDL_RenderCopy(r,character,&SrcRect1,&TargetRect1);
		}else if(coin_num<VELOCITY[6]*40){
			SDL_RenderCopy(r,character,&SrcRect0,&TargetRect1);
		}else{
			coin_num=0;
		}
		coin_num++;	
		if(char_position0.x>150){
			SDL_Rect SrcRect4={0,136,34,57};
			Vector2d new_position1 = wizard_position0 + position_delta*char_direction;
			wizard_position0=new_position1;
			SDL_Rect TargetRect2={wizard_position0.x,wizard_position0.y,65,65};
			SDL_RenderCopy(r,wizard,&SrcRect4,&TargetRect2);
		}
		return;
	}
	void handle_key_down(SDL_Keycode key){
		if (key == SDLK_UP){
			if(start==2){
				char_direction.x = cos(-90*(M_PI/180));
				char_direction.y = sin(-90*(M_PI/180));
			}
		}else if (key == SDLK_DOWN){	
			if(start==2){
				char_direction.x = cos(90*(M_PI/180));
				char_direction.y = sin(90*(M_PI/180));
			}
		}else if (key == SDLK_RIGHT){	
			if(start==2){
				char_direction.x = cos(0*(M_PI/180));
				char_direction.y = sin(0*(M_PI/180));
			}
		}else if (key == SDLK_LEFT){	
			if(start==2){
				char_direction.x = cos(180*(M_PI/180));
				char_direction.y = sin(180*(M_PI/180));
			}
		}else if (key == SDLK_r){
			Vector2d rotation( cos(30*(M_PI/180)), sin(30*(M_PI/180)) );
			Vector2d new_direction(
					rotation.x*ball_direction[0].x - rotation.y*ball_direction[0].y,
					rotation.x*ball_direction[0].y + rotation.y*ball_direction[0].x);
			ball_direction[0] = new_direction;
		}
	}
	void handle_mouse_down(int x, int y, int button){
	}
	void handle_mouse_up(int x, int y, int button){	
			if(start<2){
				start++;
				return;
			}	
	}
	
	void handle_mouse_moved(int x, int y){
		mouse_pos4.x=mouse_pos3.x;
		mouse_pos4.y=mouse_pos3.y;
		mouse_pos3.x=mouse_pos2.x;
		mouse_pos3.y=mouse_pos2.y;
		mouse_pos2.x=mouse_pos1.x;
		mouse_pos2.y=mouse_pos1.y;
		mouse_pos1.x=mouse_pos.x;
		mouse_pos1.y=mouse_pos.y;
		mouse_pos.x=x;
		mouse_pos.y=y;
		ball_colour_idx--;
		if (ball_colour_idx < 0)
			ball_colour_idx = NUM_COLOURS-1;
	}
	void load_image(SDL_Renderer *renderer){
		bmp=SDL_LoadBMP("pictures/character.bmp");
		character=SDL_CreateTextureFromSurface(renderer,bmp);
		SDL_FreeSurface(bmp);
		
		bmp=SDL_LoadBMP("pictures/wizard.bmp");
		wizard=SDL_CreateTextureFromSurface(renderer,bmp);
		SDL_FreeSurface(bmp);
		
		bmp=SDL_LoadBMP("pictures/background0.bmp");
		background0=SDL_CreateTextureFromSurface(renderer,bmp);
		SDL_FreeSurface(bmp);		
		
		bmp=SDL_LoadBMP("pictures/background.bmp");
		background=SDL_CreateTextureFromSurface(renderer,bmp);
		SDL_FreeSurface(bmp);
		
		bmp=SDL_LoadBMP("pictures/background1.bmp");
		background1=SDL_CreateTextureFromSurface(renderer,bmp);
		SDL_FreeSurface(bmp);
	
		bmp=SDL_LoadBMP("pictures/plant1.bmp");
		plant1=SDL_CreateTextureFromSurface(renderer,bmp);
		SDL_FreeSurface(bmp);
		
		bmp=SDL_LoadBMP("pictures/plant2.bmp");
		plant2=SDL_CreateTextureFromSurface(renderer,bmp);
		SDL_FreeSurface(bmp);
		
		bmp=SDL_LoadBMP("pictures/plant3.bmp");
		plant3=SDL_CreateTextureFromSurface(renderer,bmp);
		SDL_FreeSurface(bmp);
		
		bmp=SDL_LoadBMP("pictures/coin1.bmp");
		coin1=SDL_CreateTextureFromSurface(renderer,bmp);
		SDL_FreeSurface(bmp);
		bmp=SDL_LoadBMP("pictures/coin2.bmp");
		coin2=SDL_CreateTextureFromSurface(renderer,bmp);
		SDL_FreeSurface(bmp);
		bmp=SDL_LoadBMP("pictures/coin3.bmp");
		coin3=SDL_CreateTextureFromSurface(renderer,bmp);
		SDL_FreeSurface(bmp);
		bmp=SDL_LoadBMP("pictures/coin4.bmp");
		coin4=SDL_CreateTextureFromSurface(renderer,bmp);
		SDL_FreeSurface(bmp);
		bmp=SDL_LoadBMP("pictures/coin5.bmp");
		coin5=SDL_CreateTextureFromSurface(renderer,bmp);
		SDL_FreeSurface(bmp);
		bmp=SDL_LoadBMP("pictures/coin6.bmp");
		coin6=SDL_CreateTextureFromSurface(renderer,bmp);
		SDL_FreeSurface(bmp);
		
		
		bmp=SDL_LoadBMP("pictures/stone.bmp");
		stone=SDL_CreateTextureFromSurface(renderer,bmp);
		SDL_FreeSurface(bmp);
		
		bmp=SDL_LoadBMP("pictures/stone1.bmp");
		stone1=SDL_CreateTextureFromSurface(renderer,bmp);
		SDL_FreeSurface(bmp);

		bmp=SDL_LoadBMP("pictures/win.bmp");
		win=SDL_CreateTextureFromSurface(renderer,bmp);