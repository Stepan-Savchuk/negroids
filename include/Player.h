#include "Sector.h"

typedef struct Player {
	short health;
	short stamina; 
	short mental;
	short hunger;
	short ammo;

	int resources;
	int bResources; //resources for building

	enum SectorID cSector;
} Player;
