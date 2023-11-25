#include <stdio.h>
#include <unistd.h>

#include <time.h>

#include "../include/render.h"
#include "../include/input.h"

void initRender(){
	initScreen();
}

void init(){
	initRender();
	initInput();
}

int input(){
}

void render(){
}

void mainLoop(){
}

void end(){
}

int main(){

	init();

	mainLoop();

	end();

	return 0;
}
