#include "Sector.h"

typedef struct Overseer {
	short id;
	char* name;

	short health;
	short stamina;
        short hunger;
        short ammo;

        enum Sector cSector;
} Overseer;
