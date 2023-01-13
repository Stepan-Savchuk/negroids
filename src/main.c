#include <stdio.h>

#include "../include/Player.h"

int main(){
	Player* p = initPlayer(5, 10, 0, 10, 5, 6);
	
	printf("x = %d y =  %d spr = %u hp = %d sp = %d ammo = %d", p->actor->object->x, p->actor->object->y, (unsigned int) p->actor->object->spriteIndex, p->actor->health, p->actor->stamina, p->bullets);
	
	destructPlayer(p);
	printf("x = %d y =  %d spr = %u	hp = %d sp = %d ammo = %d", p->actor->object->x, p->actor->object->y, (unsigned int) p->actor->object->spriteIndex, p->actor->health, p->actor->stamina, p->bullets);
	return 0;
}
