#include "../include/Actor.h"

Actor* newActor(unsigned int x, unsigned int y, size_t spriteIndex, uint8_t health, uint8_t stamina){
        Actor* tActor = malloc(sizeof(Actor));
	
	Object* tObject = newObject(x, y, spriteIndex);
	
	tActor->pObject = tObject;
	tActor->health = health;
	tActor->stamina = stamina;

        return tActor;
}

void destructActor(Actor* pActor){
	free(pActor);
}

void moveActor(Actor* pActor, unsigned int nx, unsigned int ny){
        pActor->pObject->x += nx;
        pActor->pObject->y += ny;
}
