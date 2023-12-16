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

Overseer* newOverseer(short nid, char* nname, short nhealth, short nstamina, short nhunger, short nammo, SectorID ncsector);

void delOverseer(Overseer* overseer);

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

SectorID getPlayerCSector(Player player);
void setPlayerCSector(Player* player, SectorID ncSector);
