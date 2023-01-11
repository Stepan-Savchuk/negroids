#include <stdint.h>

#include "Object.h"

typedef struct Actor {
	Object object;

	uint8_t health;
	uint8_t stamina;
} Actor;

Actor newActor(unsigned short x, unsigned short y, char sprite, uint8_t health, uint8_t stamina){
	Object tObject = newObject(x, y, sprite);

	Actor tActor = {tObject, health, stamina};

	return tActor;
}

void moveActor(Actor* actor, unsigned short nx, unsigned short ny);

