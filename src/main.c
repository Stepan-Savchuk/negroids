#include <stdio.h>
#include <unistd.h>

#include "../include/Player.h"
#include "../include/render.h"
#include "../include/input.h"

Player* player;

void init(){
	player = initPlayer(10, 10, 0, 3, 6, 6);
        initScreen();                                                   initInput();
	drawTile(getTile(player->actor->object->spriteIndex), getPlayerX(player), getPlayerY(player));
}

void mainLoop(){
	while(true){
               if(getch() == 'q') return;                                      else if(getch() == 'w') moveActor(player->actor,
 0, -1);                                                                       else if(getch() == 's') moveActor(player->actor,
 0, 1);                                                                        else if(getch() == 'd') moveActor(player->actor,
 1, 0);                                                                        else if(getch() == 'a') moveActor(player->actor,
 -1, 0);                                                        
               clear();
               drawTile(getTile(player->actor->object->spriteIndex), getPlayerX(player), getPlayerY(player));                                 refresh();
        }
}

int main(){
	init();
	mainLoop();
	destructPlayer(player);
	restoreInput();
	endScreen();
	return 0;
}
