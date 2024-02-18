#include "../include/Slave.h"

Slave* newSlave(int nid, char* nname, short nhealth, short nstamina, short nmental, short nhunger, short nhorny, short nstrength, short nspeed, short nbeauty, SpecID nspec, SectorID ncsector){
  
  Slave* tSlave = (Slave*) malloc(sizeof(Slave));

  tSlave->id = nid;
  tSlave->name = nname;
  tSlave->health = nhealth;
  tSlave->stamina = nstamina;
  tSlave->mental = nmental;
  tSlave->hunger = nhunger;
  tSlave->horny = nhorny;
  tSlave->strength = nstrength;
  tSlave->speed = nspeed;
  tSlave->beauty = nbeauty;
  tSlave->spec = nspec;
  tSlave->cSector = ncsector;

  return tSlave;
}

void delSlave(Slave** slave){
  free(*slave);
  *slave = NULL;
}

int getSlaveID(Slave slave){
  return slave.id;
}
void setSlaveID(Slave* slave, short nid){
  slave->id = nid;
}

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
