#include "../include/Player.h"


Player* initPlayer(unsigned int x, unsigned int y, size_t spriteIndex, uint8_t health, uint8_t stamina, uint8_t bullets){
	Player* tPlayer = malloc(sizeof(Player));
	Actor* tActor = newActor(x, y, spriteIndex, health, stamina);
	
	tPlayer->actor = tActor;
	tPlayer->bullets = bullets;

	return tPlayer;
}

void destructPlayer(Player* player){
	free(player);
}

unsigned int getPlayerX(Player* player){
	return player->actor->object->x;
}

unsigned int getPlayerY(Player* player){
        return player->actor->object->y;
}
