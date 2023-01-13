#include <stdlib.h>

typedef struct Object{
	unsigned short x;
	unsigned short y;

	size_t spriteIndex;
} Object;

Object* newObject(unsigned short x, unsigned short y, size_t spriteIndex);

void destructObject(Object* object);
