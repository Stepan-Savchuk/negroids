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
