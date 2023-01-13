#include "../include/Player.h"


Player* initPlayer(unsigned short x, unsigned short y, size_t spriteIndex, uint8_t health, uint8_t stamina, uint8_t bullets){
	Player* tPlayer = malloc(sizeof(Player));
	Actor* tActor = newActor(x, y, spriteIndex, health, stamina);
	
	tPlayer->actor = tActor;
	tPlayer->bullets = bullets;

	return tPlayer;
}

void destructPlayer(Player* player){
	free(player);
}
