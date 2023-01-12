#include "Actor.h"

Actor* newActor(unsigned short x, unsigned short y, char sprite, uint8_t health, uint8_t stamina){
        Object tObject = newObject(x, y, sprite);

	tObject->x = x;
	tObject->y = y;
	tObject->sprite = sprite;

        Actor* tActor = malloc(sizeof(Actor));

	tActor->object = tObject;
	tActor->health = health;
	tActor->stamina = stamina;

        return tActor;
}

void destructActor(Actor* actor){
	free(actor);
}

void moveActor(Actor* actor, unsigned short nx, unsigned short ny){
        Object* tObject = actor->object;

        tObject->x = nx;
        tObject->y = ny;

        tObject = NULL;
}
