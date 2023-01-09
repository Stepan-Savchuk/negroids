#include "Actor.h"

void move(Actor* actor, unsigned short nx, unsigned short newy){
        Object* tObject = &(*actor->object);

        tObject->x = nx;
        tObject->y = ny;

        tObject = NULL;
}
