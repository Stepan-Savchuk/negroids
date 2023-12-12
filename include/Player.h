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

short getPlayerHealth(Player player);
void setPlayerHealth(Player* player, short nhealth);

short getPlayerStamina(Player player);
void setPlayerStamina(Player* player, short nstamina);

short getPlayerMental(Player player);
void setPlayerMental(Player* player, short nmental);

short getPlayerHunger(Player player);
void setPlayerHunger(Player* player, short nhunger);

short getPlayerAmmo(Player player);
void setPlayerStamina(Player* player, short nammo);

int getPlayerResources(Player player);
void setPlayerResources(Player* player, int nResources);

int getPlayerBResources(Player player);
void setPlayerBResources(Player* player, int nbResources);

SectorID getPlayerCSector(Player player);
void setPlayerCSector(Player* player, SectorID ncSector);
