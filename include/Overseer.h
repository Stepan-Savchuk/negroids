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

Overseer* newOverseer(short nid, char* nname, short nhealth, short nstamina, short nhunger, short nammo, SectorID ncsector);

void delOverseer(Overseer** overseer);


short getOverseerID(Overseer overseer);
void setOverseerID(Overseer* overseer, short nid);

char* getOverseerName(Overseer overseer);
void setOverseerName(Overseer* overseer, char* nname);

short getOverseerHealth(Overseer overseer);
void setOverseerHealth(Overseer* overseer, short nhealth);

short getOverseerStamina(Overseer overseer);
void setOverseerStamina(Overseer* overseer, short nstamina);

short getOverseerHunger(Overseer overseer);
void setOverseerHunger(Overseer* overseer, short nhunger);       

short getOverseerAmmo(Overseer overseer);
void setOverseerStamina(Overseer* overseer, short nammo);

SectorID getOverseerCSector(Overseer overseer);
void setOverseerCSector(Overseer* overseer, SectorID ncSector);
