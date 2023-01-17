#include "../include/Actor.h"

Actor* newActor(unsigned int x, unsigned int y, size_t spriteIndex, uint8_t health, uint8_t stamina){
        Actor* tActor = malloc(sizeof(Actor));
	
	Object* tObject = newObject(x, y, spriteIndex);
	
	tActor->object = tObject;
	tActor->health = health;
	tActor->stamina = stamina;

        return tActor;
}

void destructActor(Actor* actor){
	free(actor);
}

void moveActor(Actor* actor, unsigned int nx, unsigned int ny){
        actor->object->x += nx;
        actor->object->y += ny;
}
