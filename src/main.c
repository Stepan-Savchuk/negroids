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
	while(true){

	}
}

void end(){
}

int main(){

	init();

	mainLoop();

	end();

	return 0;
}
