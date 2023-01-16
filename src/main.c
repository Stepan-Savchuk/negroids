#include <stdio.h>
#include <unistd.h>

#include "../include/Player.h"
#include "../include/render.h"

int main(){
	Player* player = initPlayer(10, 10, 0, 3, 6, 6);
	initScreen();
	
	destructPlayer(player);
	endScreen();
	return 0;
}
