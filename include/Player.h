#include "Sector.h"

typedef struct Player {
	short health;
	short stamina; 
	short mental;
	short hunger;
	short ammo;

	//Maybe Ill move 'em to main.c as global variables
	//and make global functions for 'em
	int resources;
	int bResources; //resources for building

	enum SectorID cSector;
} Player;

//TODO Initialization and destruction of player object I'll do in main.c

short getHealth(Player player);
void setHealth(Player* player);

