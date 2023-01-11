#include "Object.h"

Object newObject(unsigned short x, unsigned short y, char sprite){
        Object tObject = {x, y, sprite};
        return tObject;
}

void destruct(void* object){
	memset(object, 0, sizeof(object));
	object = NULL;
}
