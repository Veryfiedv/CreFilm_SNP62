LIB_DIR=./lib_osx
g++ -o sample_ball sample_ball.cpp -framework SDL2 -I. -L${LIB_DIR} -lSDL2_gfx
