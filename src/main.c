#include <stdio.h>
#include <unistd.h>

#include "../include/Player.h"
#include "../include/render.h"

int main(){
	Player* player = initPlayer(10, 10, 0, 3, 6, 6);
	initScreen();
	for(int i=0,j=0; i<10; i++,j++){
		drawTile(getTile(player->actor->object->spriteIndex), player->actor->object->x, player->actor->object->y);
		sleep(1000);
		moveActor(player->actor, i, j);
		refresh();
	}
	destructPlayer(player);
	endScreen();
	return 0;
}
