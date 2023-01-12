#include "Actor.h"

Actor* newActor(unsigned short x, unsigned short y, char sprite, uint8_t health, uint8_t stamina){
        Actor* tActor = malloc(sizeof(Actor));
	
	Object* tObject = newObject(x, y, sprite);
	
	tActor->object = tObject;
	tActor->health = health;
	tActor->stamina = stamina;

        return tActor;
}

void destructActor(Actor* actor){
	free(actor);
}

void moveActor(Actor* actor, unsigned short nx, unsigned short ny){
        actor->object->x = nx;
        actor->object->y = ny;
}
