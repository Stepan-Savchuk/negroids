#include "Object.h"

void destruct(void* object){
        free(object);
        object = NULL;
}

Object newObject(unsigned short x, unsigned short y, char sprite){
        Object tObject = {x, y, sprite};
        return tObject;
}
