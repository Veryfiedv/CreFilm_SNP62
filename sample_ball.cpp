
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