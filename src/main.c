#include <stdio.h>
#include <unistd.h>

#include "../include/Player.h"
#include "../include/render.h"
#include "../include/input.h"

int main(){
	Player* player = initPlayer(10, 10, 0, 3, 6, 6);
	initScreen();
	initInput();
	while(true){
		if(getch() == 'q') break;
		else if(getch() == 'w') moveActor(player->actor, 0, -1);
		else if(getch() == 's') moveActor(player->actor, 0, 1);
		else if(getch() == 'd') moveActor(player->actor, 1, 0);
		else if(getch() == 'a') moveActor(player->actor, -1, 0);

		clear();
		drawTile(getTile(player->actor->object->spriteIndex), getPlayerX(player), getPlayerY(player));
		refresh();
	}
	destructPlayer(player);
	restoreInput();
	endScreen();
	return 0;
}
