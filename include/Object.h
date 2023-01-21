#include <stdlib.h>

typedef struct Object{
	unsigned int x;
	unsigned int y;

	size_t spriteIndex;
} Object;

Object* newObject(unsigned int x, unsigned int y, size_t spriteIndex);

void destructObject(Object* pObject);
