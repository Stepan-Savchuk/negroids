#include <stdint.h>

typedef struct Object{
	unsigned short x;
	unsigned short y;

	char sprite;
} Object;

void destruct(void* object){
	free(object);
	object = NULL;
}
