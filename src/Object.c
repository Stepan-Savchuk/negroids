#include "../include/Object.h"

Object* newObject(unsigned int x, unsigned int y, size_t spriteIndex){
        Object* tObject = malloc(sizeof(Object));
	
	tObject->x = x;
	tObject->y = y;
	
	tObject->spriteIndex = spriteIndex;
        return tObject;
}

void destructObject(Object* object){
	free(object);
}
