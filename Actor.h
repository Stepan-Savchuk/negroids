#include "Object.h"

typedef struct Actor {
	Object object;

	uint8_t health;
	uint8_t stamina;
} Actor;

void move(Actor* actor, unsigned short nx, unsigned short newy);

