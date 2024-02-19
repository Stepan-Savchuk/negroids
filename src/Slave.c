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


char* getSlaveName(Slave slave){
  return slave.name;
}

void setSlaveName(Slave* slave, char* nname){
  slave->name = nname;
}


short getSlaveHealth(Slave slave){
  return slave.health;
}

void setSlaveHealth(Slave* slave, short nhealth){
  slave->health = nhealth;
}


short getSlaveStamina(Slave slave){
  return slave.stamina;
}

void setSlaveStamina(Slave* slave, short nstamina){
  slave->stamina = nstamina;
} 


short getSlaveMental(Slave slave){
  return slave.mental;
}

void setSlaveMental(Slave* slave, short nmental){
  slave->mental = nmental;
}


short getSlaveHunger(Slave slave){
  return slave.hunger;
}

void setSlaveHunger(Slave* slave, short nhunger){
  slave->hunger = nhunger;
}


short getSlaveHorny(Slave slave){
  return slave.horny;
}

void setSlaveHorny(Slave* slave, short nhorny){
  slave->horny = nhorny;
}


short getSlaveStrength(Slave slave){
  return slave.strength;
}

void setSlaveStrength(Slave* slave, short nstrength){
  slave->strength = nstrength;
}


short getSlaveSpeed(Slave slave){
  return slave.speed;
}

void setSlaveSpeed(Slave* slave, short nspeed){
  slave->speed = nspeed;
}


short getSlaveBeauty(Slave slave){
  return slave.beauty;
}

void setSlaveBeauty(Slave* slave, short nbeauty){
  slave->beauty = nbeauty;
}


short getSlaveSpec(Slave slave){
  return slave.spec;
}

void setSlaveSpec(Slave* slave, SpecID nspec){
  slave->spec = nspec;
}


SectorID getSlaveCSector(Slave slave){
  return slave.cSector;
}
void setSlaveCSector(Slave* slave, SectorID ncSector){
  slave->cSector = ncSector;
}
