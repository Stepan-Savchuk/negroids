#include <stdio.h>
#include <unistd.h>

#include <time.h>

#include "../include/Player.h"
#include "../include/render.h"
#include "../include/input.h"

Player* gPlayer;

void initRender(){
	initScreen();
        initColors();

        drawTile(getTile(gPlayer->pActor->pObject->spriteIndex), getPlayerX(gPlayer), getPlayerY(gPlayer), 1);
}

void init(){
	gPlayer = initPlayer(10, 10, 0, 3, 6, 6);

	initRender();
	initInput();
}

int input(){
	if(getch() != ERR){                                                            if(getch() == 'q') return -1;
		else if(getch() == 'w') moveActor(gPlayer->pActor, 0, -1);
		else if(getch() == 's') moveActor(gPlayer->pActor, 0, 1);
		else if(getch() == 'd') moveActor(gPlayer->pActor, 1, 0);
		else if(getch() == 'a') moveActor(gPlayer->pActor, -1, 0);
	}
	return 0;
}

void render(){
	clear();
	drawTile(getTile(gPlayer->pActor->pObject->spriteIndex), getPlayerX(gPlayer), getPlayerY(gPlayer), 1);
	refresh();
}

void mainLoop(){
	while(true){
		if(input() == -1) return;
		render();
	}
}

void end(){
	destructPlayer(gPlayer);
	restoreInput();
	endScreen();
}

int main(){

	init();

	mainLoop();

	end();

	return 0;
}
