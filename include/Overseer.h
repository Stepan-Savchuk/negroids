#include "Sector.h"

typedef struct Overseer {
	short id;
	char* name;

	short health;
	short stamina;
        short hunger;
        short ammo;

        SectorID cSector;
} Overseer;

//TODO make up some functions besides con/de-structors and g/s-etters for em
