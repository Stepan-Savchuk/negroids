#include "Sector.h"

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
	short spec;

        SectorID cSector;
} Slave;

Slave* newSlave(int nid, char* nname, short nhealth, short nstamina, short nmental, short nhunger, short nhorny, short nstrength, short nspeed, short nbeauty, short nspec, SectorID ncSector);

void delSlave(Slave* slave);

//TODO getters and setters ... not to forget about id and name

int getSlaveID(Slave slave);
void setSlaveID(Slave* slave, short nid);

char* getSlaveName(Slave slave);
void setSlaveName(Slave* slave, nname);

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

//TODO Rest of getters/setters

SectorID getSlaveCSector(Slave slave);
void setSlaveCSector(Slave* slave, SectorID ncSector);
