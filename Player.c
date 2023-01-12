#include "Player.h"


Player initPlayer(unsigned short x, unsigned short y, char sprite, uint8_t health, uint8_t stamina, uint8_t bullets){
	Actor tActor = newActor(x, y, sprite, health, stamina);

	Player tPlayer = {tActor, bullets};

	return tPlayer;
}
