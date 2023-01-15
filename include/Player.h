#include"Actor.h"

typedef struct Player{
	Actor* actor;

	uint8_t bullets;
} Player;

Player* initPlayer(unsigned short x, unsigned short y, size_t spriteIndex, uint8_t health, uint8_t stamina, uint8_t bullets);

void destructPlayer(Player* player);