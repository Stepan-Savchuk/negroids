#include "../include/Overseer.h"

Overseer* newOverseer(short nid, char* nname, short nhealth, short nstamina, short nhunger, short nammo, SectorID ncsector){
  Overseer* tOverseer = (Overseer*) malloc(sizeof(Overseer));

  tOverseer->id = nid;
  tOverseer->name = nname;
  tOverseer->health = nhealth;
  tOverseer->stamina = nstamina;
  tOverseer->hunger = nhunger;
  tOverseer->ammo = nammo;
  tOverseer->cSector = ncsector;

  return tOverseer;
}

void delOverseer(Overseer** overseer){
  free(*overseer);
  *overseer = NULL;
}


short getOverseerID(Overseer overseer){
  return overseer.id;
}

void setOverseerID(Overseer* overseer, short nid){
  overseer->id = nid;
}


char* getOverseerName(Overseer overseer){
  return overseer.name;
}

void setOverseerName(Overseer* overseer, char* nname){
  overseer->name = nname;
}


short getOverseerHealth(Overseer overseer){
  return overseer.health;
}

void setOverseerHealth(Overseer* overseer, short nhealth){
  overseer->health = nhealth;
}


short getOverseerStamina(Overseer overseer){
  return overseer.stamina;
}

void setOverseerStamina(Overseer* overseer, short nstamina){
  overseer->stamina = nstamina;
}


short getOverseerHunger(Overseer overseer){
  return overseer.hunger;
}
void setOverseerHunger(Overseer* overseer, short nhunger){
  overseer->hunger = nhunger;
} 


short getOverseerAmmo(Overseer overseer){
  return overseer.ammo;
}

void setOverseerAmmo(Overseer* overseer, short nammo){
  overseer->ammo = nammo;
}


SectorID getOverseerCSector(Overseer overseer){
  return overseer.cSector;
}

void setOverseerCSector(Overseer* overseer, SectorID ncSector){
  overseer->cSector = ncSector;
}
