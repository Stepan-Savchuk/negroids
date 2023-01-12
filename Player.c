#include "Player.h"


Player* initPlayer(unsigned short x, unsigned short y, char sprite, uint8_t health, uint8_t stamina, uint8_t bullets){
	Player* tPlayer = malloc(sizeof(Player));
	Actor* tActor = newActor(x, y, sprite, health, stamina);
	
	tPlayer->actor = tActor;
	tPlayer->bullets = bullets;

	return tPlayer;
}

void destructPlayer(Player* player){
	free(player);
}
