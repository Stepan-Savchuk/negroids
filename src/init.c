#include "../include/init.h"
#include <stdlib.h>
#include <unistd.h>


void initRender(){
  system("clear");
}

void initInput(){}

void initSectors(){
  Sector* homeSector = newSector(HOME, 500, 500, 250, 500);
  Sector* portSector = newSector(PORT, 500, 1250, 0, 0);

  Sector* norternSector = newSector(NORTH, 250, 750, 500, 250);
  Sector* northFarSector = newSector(NORTHF, 0, 1000, 750, 0);

  Sector* easternSector = newSector(EAST, 750, 250, 0, 750);
  Sector* eastFarSector = newSector(EASTF, 1000, 500, 250, 0);

  Sector* southernSector = newSector(SOUTH, 500, 250, 250, 750);
  Sector* southFarSector = newSector(SOUTHF, 250, 250, 250, 1000);

  //TODO : Think of a way to pass the those vluues intovmain.c
}
void initActors(){}

void init0Resources(){}

void init(){
  initRender();
  initInput();

  initSectors();
  initActors();

  init0Resources();
}
