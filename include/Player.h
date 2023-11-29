#include "Sector.h"

typedef struct Player {
	short health;
	short stamina; 
	short mental;
	short hunger;
	short ammo;

	enum Sector cSector;
} Player;
