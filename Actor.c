#include "Actor.h"

void moveActor(Actor* actor, unsigned short nx, unsigned short ny){
        Object* tObject = &(actor->object);

        tObject->x = nx;
        tObject->y = ny;

        tObject = NULL;
}
