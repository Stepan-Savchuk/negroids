#include "Sector.h"

typedef struct Overseer {
	short health;
	short stamina;
        short hunger;
        short ammo;

        enum Sector cSector;
} Overseer;
