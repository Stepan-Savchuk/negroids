#include <stdio.h>
#include <unistd.h>

#include <time.h>

#include "../include/render.h"
#include "../include/input.h"

#include "../include/Building.h"

void initRender(){
	//initScreen();
}

void init(){
	//initRender();
	//initInput();
}

int input(){
	return 0;
}

void render(){
}

void mainLoop(){
	/*while(true){

	}*/
}

void end(){
}


void test(){
	Building tBuild = *newBuilding(MINE, "MINE", 100, 1, 1);
	int tl = getBuildingLevel(tBuild);
	printf("Test Level1 = %d", tl);

	delBuilding(&tBuild);

	printf("Test Level1 = %d", tl);
}

int main(){

	init();

	mainLoop();

	test();

	end();

	return 0;
}
