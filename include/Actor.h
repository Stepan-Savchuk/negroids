#include <stdint.h>

#include "Object.h"

typedef struct Actor {
	Object* object;

	uint8_t health;
	uint8_t stamina;
} Actor;

Actor* newActor(unsigned int x, unsigned int y, size_t spriteIndex, uint8_t health, uint8_t stamina);

void destructActor(Actor* actor);

void moveActor(Actor* actor, unsigned int nx, unsigned int ny);

