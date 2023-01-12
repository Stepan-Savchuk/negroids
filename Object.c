#include "Object.h"

Object* newObject(unsigned short x, unsigned short y, char sprite){
        Object* tObject = malloc(sizeof(Object));
	
	tObject->x = x;
	tObject->y = y;
	
	tObject->sprite = sprite;
        return tObject;
}

void destructObject(Object* object){
	free(object);
}
