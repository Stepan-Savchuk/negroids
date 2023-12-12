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

short getSlaveHealth(Slave slave);                      void setSlaveHealth(Slave* slave, short nhealth);
                                                           short getSlaveStamina(Slave slave);
void setSlaveStamina(Slave* slave, short nstamina);                                                                short getSlaveMental(Slave slave);                      void setSlaveMental(Slave* slave, short nmental);

short getSlaveHunger(Slave slave);
void setSlaveHunger(Slave* slave, short nhunger);
