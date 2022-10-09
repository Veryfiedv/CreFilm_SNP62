LIB_DIR=./lib_linux
g++ -o sample_ball sample_ball.cpp -lSDL2 -I. -L${LIB_DIR} -lSDL2_gfx
