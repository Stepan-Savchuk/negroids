#include <stdio.h>

#include "Player.h"

int main(){
	Player* p = initPlayer(5, 10, 'A', 10, 5, 6);
	
	printf("x = %d y =  %d spr = %c hp = %d sp = %d ammo = %d", p->actor->object->x, p->actor->object->y, p->actor->object->sprite, p->actor->health, p->actor->stamina, p->bullets);
	
	destructPlayer(p);
	printf("x = %d y =  %d spr = %c hp = %d sp = %d ammo = %d", p->actor->object->x, p->actor->object->y, p->actor->object->sprite, p->actor->health, p->actor->stamina, p->bullets);
	return 0;
}
