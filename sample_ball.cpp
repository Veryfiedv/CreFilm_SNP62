
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
		SDL_FreeSurface(bmp);
		
		bmp=SDL_LoadBMP("pictures/lose.bmp");
		lose=SDL_CreateTextureFromSurface(renderer,bmp);
		SDL_FreeSurface(bmp);
	}
	void draw(SDL_Renderer *renderer, float frame_delta_ms){
		float frame_delta_seconds = frame_delta_ms/1000.0;
		position_delta = frame_delta_seconds*VELOCITY[6];

		//The ball collides with the edge of the screen if the new position is less than BALL_RADIUS
		//pixels away from any edge.	
		SDL_SetRenderDrawColor(renderer, 128, 128, 128, 255);
		if(bo_win||bo_lose){
			game_over(renderer);
		}else if(start==0){
			
			SDL_RenderClear(renderer);
			SDL_Rect SrcRect={0,0,CANVAS_SIZE_X,CANVAS_SIZE_Y};
			SDL_Rect TargetRect={0,0,CANVAS_SIZE_X,CANVAS_SIZE_Y};
			SDL_RenderCopy(renderer,background0,&SrcRect,&TargetRect);
		
			for(int i=0;i<6;i++){
				new_position(i,frame_delta_seconds);
				filledCircleRGBA(renderer,ball_position[i].x,ball_position[i].y,BALL_RADIUS[i],BALL_COLOURS[i].r,BALL_COLOURS[i].g,BALL_COLOURS[i].b,150);
				collision(i);
			}
			
		}else if(start==1){
			SDL_RenderClear(renderer);
			intro(renderer);
		}else{
			SDL_RenderClear(renderer);
			set_background(renderer);
			set_coin(renderer);
			draw_char(renderer);
			draw_wizard(renderer);
			
		}
		//mouse
		if(mouse_pos.x>0&&mouse_pos.x<CANVAS_SIZE_X-1&&mouse_pos.y>0&&mouse_pos.y<CANVAS_SIZE_Y-1){
			filledCircleRGBA(renderer,mouse_pos4.x,mouse_pos4.y,5,BALL_COLOURS[6].r,BALL_COLOURS[6].g,BALL_COLOURS[6].b,50);
			filledCircleRGBA(renderer,mouse_pos3.x,mouse_pos3.y,4,BALL_COLOURS[6].r,BALL_COLOURS[6].g,BALL_COLOURS[6].b,100);
			filledCircleRGBA(renderer,mouse_pos2.x,mouse_pos2.y,3,BALL_COLOURS[6].r,BALL_COLOURS[6].g,BALL_COLOURS[6].b,150);
			filledCircleRGBA(renderer,mouse_pos1.x,mouse_pos1.y,2,BALL_COLOURS[6].r,BALL_COLOURS[6].g,BALL_COLOURS[6].b,200);
			filledCircleRGBA(renderer,mouse_pos.x,mouse_pos.y,1,BALL_COLOURS[6].r,BALL_COLOURS[6].g,BALL_COLOURS[6].b,255);
		}

		SDL_RenderPresent(renderer);
	}
	void draw_wizard(SDL_Renderer *renderer){
		if(box[(int)wizard_position.x+40][(int)wizard_position.y+1]==false){
			wizard_direction.x= cos(180*(M_PI/180));
			wizard_direction.y= sin(180*(M_PI/180));
		}else if(box[(int)wizard_position.x-40][(int)wizard_position.y+1]==false){
			wizard_direction.x= cos(0);
			wizard_direction.y= sin(0);
		}
		Vector2d new_position = wizard_position + position_delta*wizard_direction;
		SDL_Rect SrcRect={0,136,34,57};
		wizard_position=new_position;
		SDL_Rect TargetRect={wizard_position.x,wizard_position.y-20,50,50};
		SDL_RenderCopy(renderer,wizard,&SrcRect,&TargetRect);
		if(((wizard_position.x-char_position.x)*(wizard_position.x-char_position.x)+
		(wizard_position.y-char_position.y)*(wizard_position.y-char_position.y))<1000)
			bo_lose=true;
		return;
	}
	void draw_char(SDL_Renderer *renderer){
		Vector2d new_position = char_position + position_delta*char_direction;
		
		if (new_position.x < 0||new_position.x > CANVAS_SIZE_X - UNIT_X||new_position.y < UNIT_Y||new_position.y > CANVAS_SIZE_Y - UNIT_Y)
			new_position=char_position;

		
		if(box[(int)new_position.x+10][(int)new_position.y+1]==false||box[(int)new_position.x+10][(int)new_position.y+UNIT_Y-5]==false||
		box[(int)new_position.x+UNIT_X-10][(int)new_position.y+1]==false||box[(int)new_position.x+UNIT_X-10][(int)new_position.y+UNIT_Y-5]==false)
			new_position=char_position;
			
		char_position = new_position;
		for(int m=(int)char_position.x-10;m<(int)char_position.x+20;m++)
			for(int n=(int)char_position.y-40;n<(int)char_position.y+UNIT_Y;n++)
				get_goal[m][n]=true;
		
		SDL_Rect TargetRect={char_position.x,char_position.y-40,50,50};
		
		if(char_direction.x==cos(0*(M_PI/180))){
			SDL_Rect SrcRect={0,127,34,38};
			SDL_Rect SrcRect1={48,127,34,38};
			SDL_Rect SrcRect2={96,127,34,38};
			SDL_Rect SrcRect3={144,127,34,38};
			if(coin_num<VELOCITY[6]*450){
				SDL_RenderCopy(renderer,character,&SrcRect,&TargetRect);
			}else if(coin_num<VELOCITY[6]*900){
				SDL_RenderCopy(renderer,character,&SrcRect1,&TargetRect);
			}else if(coin_num<VELOCITY[6]*1350){
				SDL_RenderCopy(renderer,character,&SrcRect2,&TargetRect);
			}else if(coin_num<VELOCITY[6]*1800){
				SDL_RenderCopy(renderer,character,&SrcRect3,&TargetRect);
			}			
		
		}else if(char_direction.x==cos(180*(M_PI/180))){
			SDL_Rect SrcRect={0,63,34,38};
			SDL_Rect SrcRect1={48,63,34,38};
			SDL_Rect SrcRect2={96,63,34,38};
			SDL_Rect SrcRect3={144,63,34,38};
			if(coin_num<VELOCITY[6]*450){
				SDL_RenderCopy(renderer,character,&SrcRect,&TargetRect);
			}else if(coin_num<VELOCITY[6]*900){
				SDL_RenderCopy(renderer,character,&SrcRect1,&TargetRect);
			}else if(coin_num<VELOCITY[6]*1350){
				SDL_RenderCopy(renderer,character,&SrcRect2,&TargetRect);
			}else if(coin_num<VELOCITY[6]*1800){
				SDL_RenderCopy(renderer,character,&SrcRect3,&TargetRect);
			}			
		
		}else if(char_direction.y==sin(-90*(M_PI/180))){
			SDL_Rect SrcRect={0,192,34,38};
			SDL_Rect SrcRect1={48,192,34,38};
			SDL_Rect SrcRect2={96,192,34,38};
			SDL_Rect SrcRect3={144,63,34,38};
			if(coin_num<VELOCITY[6]*450){
				SDL_RenderCopy(renderer,character,&SrcRect,&TargetRect);
			}else if(coin_num<VELOCITY[6]*900){
				SDL_RenderCopy(renderer,character,&SrcRect1,&TargetRect);
			}else if(coin_num<VELOCITY[6]*1350){
				SDL_RenderCopy(renderer,character,&SrcRect2,&TargetRect);
			}else if(coin_num<VELOCITY[6]*1800){
				SDL_RenderCopy(renderer,character,&SrcRect3,&TargetRect);
			}	
		
		}else if(char_direction.y ==sin(90*(M_PI/180))){
			SDL_Rect SrcRect={0,0,34,38};
			SDL_Rect SrcRect1={48,0,34,38};
			SDL_Rect SrcRect2={96,0,34,38};
			SDL_Rect SrcRect3={144,0,34,38};
		
			if(coin_num<VELOCITY[6]*450){
				SDL_RenderCopy(renderer,character,&SrcRect,&TargetRect);
			}else if(coin_num<VELOCITY[6]*900){
				SDL_RenderCopy(renderer,character,&SrcRect1,&TargetRect);
			}else if(coin_num<VELOCITY[6]*1350){
				SDL_RenderCopy(renderer,character,&SrcRect2,&TargetRect);
			}else if(coin_num<VELOCITY[6]*1800){
				SDL_RenderCopy(renderer,character,&SrcRect3,&TargetRect);
			}
		}
	}
	void set_coin(SDL_Renderer *renderer){
		SDL_Rect SrcRect={0,0,64,64};
		int coin=0;
		for(int i=0;i<CANVAS_SIZE_X;i=i+UNIT_X)
			for(int j=UNIT_Y;j<CANVAS_SIZE_Y;j=j+UNIT_Y*2){
				if(box[i][j]==true&&get_goal[i][j]!=true){
					SDL_Rect TargetRect={i+10,j-20,30,30};
					if(coin_num<position_delta*300){
						SDL_RenderCopy(renderer,coin1,&SrcRect,&TargetRect);
					}else if(coin_num<VELOCITY[6]*600){
						SDL_RenderCopy(renderer,coin2,&SrcRect,&TargetRect);
					}else if(coin_num<VELOCITY[6]*900){
						SDL_RenderCopy(renderer,coin3,&SrcRect,&TargetRect);
					}
					else if(coin_num<VELOCITY[6]*1200){
						SDL_RenderCopy(renderer,coin4,&SrcRect,&TargetRect);
					}
					else if(coin_num<VELOCITY[6]*1500){
						SDL_RenderCopy(renderer,coin5,&SrcRect,&TargetRect);
					}
					else if(coin_num<VELOCITY[6]*1800){
						SDL_RenderCopy(renderer,coin6,&SrcRect,&TargetRect);
					}else{
						coin_num=0;
					}
					coin++;
				}	
				coin_num++;
			}
			if(coin==0){
				bo_win=true;
				return;			
			}

	}
	void game_over(SDL_Renderer* r){
		SDL_RenderClear(r);	
		if(bo_win){
			SDL_Rect m_pSrcRect={0,0,800,600};
			SDL_Rect m_pTargetRect={0,0,800,600};
			SDL_RenderCopy(r,win,&m_pSrcRect,&m_pTargetRect);
		}else{
			SDL_Rect m_pSrcRect={0,0,800,600};
			SDL_Rect m_pTargetRect={0,0,800,600};
			SDL_RenderCopy(r,lose,&m_pSrcRect,&m_pTargetRect);
		}
		return;
	}
	void set_background(SDL_Renderer *renderer){
			SDL_Rect SrcRect={0,0,64,64};
			for(int i=0;i<CANVAS_SIZE_X;i=i+UNIT_X)
				for(int j=0;j<CANVAS_SIZE_Y;j=j+UNIT_Y){
					SDL_Rect TargetRect={i,j,UNIT_X,UNIT_Y};
					SDL_RenderCopy(renderer,background1,&SrcRect,&TargetRect);
					if(start_back==false){
						for(int m=i;m<i+UNIT_X;m++)
							for(int n=j;n<j+UNIT_Y;n++)
								box[m][n]=true;
					}
			}
			
			SDL_Rect SrcRect1={0,0,50,50};
			for(int i=6*UNIT_X;i<UNIT_X*12;i=i+UNIT_X){
				int j=6*UNIT_Y;
				SDL_Rect TargetRect={i,j-20,50,50};
				SDL_RenderCopy(renderer,plant1,&SrcRect1,&TargetRect);
				if(start_back==false){
						for(int m=i;m<i+UNIT_X;m++)
							for(int n=j;n<j+UNIT_Y;n++)
								box[m][n]=false;
				}
			}
			for(int i=4*UNIT_X;i<7*UNIT_X;i=i+UNIT_X)
				for(int j=UNIT_Y;j<3*UNIT_Y;j=j+UNIT_Y){
				SDL_Rect TargetRect={i,j-20,50,50};
				SDL_RenderCopy(renderer,plant2,&SrcRect1,&TargetRect);
				if(start_back==false){
						for(int m=i;m<i+UNIT_X;m++)
							for(int n=j;n<j+UNIT_Y;n++)
								box[m][n]=false;
				}
			}
			
			for(int i=7*UNIT_X;i<10*UNIT_X;i=i+UNIT_X)
				for(int j=13*UNIT_Y;j<15*UNIT_Y;j=j+UNIT_Y){	
				SDL_Rect TargetRect={i,j-20,50,50};
				SDL_RenderCopy(renderer,plant1,&SrcRect1,&TargetRect);
				if(start_back==false){
						for(int m=i;m<i+UNIT_X;m++)
							for(int n=j;n<j+UNIT_Y;n++)
								box[m][n]=false;
				}
			}
			
			for(int i=11*UNIT_X;i<14*UNIT_X;i=i+UNIT_X){
				int j=14*UNIT_Y;
				SDL_Rect TargetRect={i,j-20,50,50};
				SDL_RenderCopy(renderer,stone,&SrcRect1,&TargetRect);
				if(start_back==false){
						for(int m=i;m<i+UNIT_X;m++)
							for(int n=j;n<j+UNIT_Y;n++)
								box[m][n]=false;
				}
			}
			for(int j=3*UNIT_Y;j<16*UNIT_Y;j=j+UNIT_Y){
				int i=15*UNIT_X;
				SDL_Rect TargetRect={i,j-20,50,50};
				SDL_RenderCopy(renderer,plant1,&SrcRect1,&TargetRect);
				if(start_back==false){
						for(int m=i;m<i+UNIT_X;m++)
							for(int n=j;n<j+UNIT_Y;n++)
								box[m][n]=false;
				}
			}
			for(int j=UNIT_Y;j<12*UNIT_Y;j=j+UNIT_Y){
				int i=0;
				SDL_Rect TargetRect={i,j-20,50,50};
				SDL_RenderCopy(renderer,plant1,&SrcRect1,&TargetRect);
				if(start_back==false){
						for(int m=i;m<i+UNIT_X;m++)
							for(int n=j;n<j+UNIT_Y;n++)
								box[m][n]=false;
				}
			}
			for(int j=UNIT_Y;j<6*UNIT_Y;j=j+UNIT_Y){
				int i=2*UNIT_X;
				SDL_Rect TargetRect={i,j-20,50,50};
				SDL_RenderCopy(renderer,plant1,&SrcRect1,&TargetRect);
				if(start_back==false){
						for(int m=i;m<i+UNIT_X;m++)
							for(int n=j;n<j+UNIT_Y;n++)
								box[m][n]=false;
				}
			}

			for(int j=5*UNIT_Y;j<7*UNIT_Y;j=j+UNIT_Y){
				int i=4*UNIT_X;
				SDL_Rect TargetRect={i,j-20,50,50};
				SDL_RenderCopy(renderer,stone1,&SrcRect1,&TargetRect);
				if(start_back==false){
						for(int m=i;m<i+UNIT_X;m++)
							for(int n=j;n<j+UNIT_Y;n++)
								box[m][n]=false;
				}
			}
			
			for(int i=2*UNIT_X;i<5*UNIT_X;i=i+UNIT_X)
				for(int j=9*UNIT_Y;j<11*UNIT_Y;j=j+UNIT_Y){
				SDL_Rect TargetRect={i,j-20,50,50};
				SDL_RenderCopy(renderer,plant3,&SrcRect1,&TargetRect);
				if(start_back==false){
						for(int m=i;m<i+UNIT_X;m++)
							for(int n=j;n<j+UNIT_Y;n++)
								box[m][n]=false;
				}
			}
			for(int i=13*UNIT_X;i<15*UNIT_X;i=i+UNIT_X){
				int j=17*UNIT_Y;
				SDL_Rect TargetRect={i,j-20,50,50};
				SDL_RenderCopy(renderer,stone1,&SrcRect1,&TargetRect);
				if(start_back==false){
						for(int m=i;m<i+UNIT_X;m++)
							for(int n=j;n<j+UNIT_Y;n++)
								box[m][n]=false;
				}
			}
			
			for(int i=6*UNIT_X;i<8*UNIT_X;i=i+UNIT_X){
				int j=7*UNIT_Y;
				SDL_Rect TargetRect={i,j-20,50,50};
				SDL_RenderCopy(renderer,stone,&SrcRect1,&TargetRect);
				if(start_back==false){
						for(int m=i;m<i+UNIT_X;m++)
							for(int n=j;n<j+UNIT_Y;n++)
								box[m][n]=false;
				}
			}
			for(int j=17*UNIT_Y;j<20*UNIT_Y;j=j+UNIT_Y){
				int i=7*UNIT_X;
				SDL_Rect TargetRect={i,j-20,50,50};
				SDL_RenderCopy(renderer,plant1,&SrcRect1,&TargetRect);
				if(start_back==false){
						for(int m=i;m<i+UNIT_X;m++)
							for(int n=j;n<j+UNIT_Y;n++)
								box[m][n]=false;
				}
			}
			for(int i=9*UNIT_X;i<12*UNIT_Y;i=i+UNIT_X){
				int j=UNIT_Y*17;
				SDL_Rect TargetRect={i,j-20,50,50};
				SDL_RenderCopy(renderer,plant1,&SrcRect1,&TargetRect);
				if(start_back==false){
						for(int m=i;m<i+UNIT_X;m++)
							for(int n=j;n<j+UNIT_Y;n++)
								box[m][n]=false;
				}
			}
			for(int i=9*UNIT_X;i<12*UNIT_X;i=i+UNIT_X){
				int j=17*UNIT_Y;