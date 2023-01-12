#include <stdlib.h>

typedef struct Object{
	unsigned short x;
	unsigned short y;

	char sprite;
} Object;

Object* newObject(unsigned short x, unsigned short y, char sprite);

void destructObject(Object* object);
