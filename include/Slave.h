#include "Sector.h"

typedef enum {
	FARMER,
	MILLER,
	MINER,
	SMITH,
	STONE_CUTTER,
	QUARRER,//??
	SAWMILLER
} SpecID;

typedef struct Slave {
	int id;
	char* name;

	short health;
  short stamina;
  short mental;
  short hunger;
  short horny;
	short strength;
	short speed;
	short beauty;
	
	SpecID spec;

  SectorID cSector;
} Slave;

Slave* newSlave(int nid, char* nname, short nhealth, short nstamina, short nmental, short nhunger, short nhorny, short nstrength, short nspeed, short nbeauty, SpecID nspec, SectorID ncSector);

void delSlave(Slave** slave);

int getSlaveID(Slave slave);
void setSlaveID(Slave* slave, short nid);

char* getSlaveName(Slave slave);
void setSlaveName(Slave* slave, char* nname);

short getSlaveHealth(Slave slave);
void setSlaveHealth(Slave* slave, short nhealth);
short getSlaveStamina(Slave slave);
void setSlaveStamina(Slave* slave, short nstamina);        

short getSlaveMental(Slave slave);
void setSlaveMental(Slave* slave, short nmental);

short getSlaveHunger(Slave slave);
void setSlaveHunger(Slave* slave, short nhunger);

short getSlaveHorny(Slave slave);
void setSlaveHorny(Slave* slave, short nhorny);

short getSlaveStrength(Slave slave);
void setSlaveStrength(Slave* slave, short nhunger);

short getSlaveSpeed(Slave slave);
void setSlaveSpeed(Slave* slave, short nspeed);

short getSlaveBeauty(Slave slave);
void setSlaveBeauty(Slave* slave, short nbeauty);

short getSlaveSpec(Slave slave);
void setSlaveSpec(Slave* slave, SpecID nspec);

SectorID getSlaveCSector(Slave slave);
void setSlaveCSector(Slave* slave, SectorID ncSector);
