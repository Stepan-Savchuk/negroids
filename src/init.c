#include "../include/init.h"
#include <stdlib.h>
#include <unistd.h>


void initRender(){
  system("clear");
}

void initInput(){}

void initSectors(Sector** sectors){
  //TODO : Figure out dis shit
  sectors[0] = newSector(HOME, 500, 500, 250, 500);
  sectors[1] = newSector(PORT, 500, 1250, 0, 0);

  sectors[2] = newSector(NORTH, 250, 750, 500, 250);
  sectors[3] = newSector(NORTHF, 0, 1000, 750, 0);

  sectors[4] = newSector(EAST, 750, 250, 0, 750);
  sectors[5] = newSector(EASTF, 1000, 500, 250, 0);

  sectors[6] = newSector(SOUTH, 500, 250, 250, 750);
  sectors[7] = newSector(SOUTHF, 250, 250, 250, 1000);

  //TODO : Think of a way to pass the those vluues intovmain.c
}
void initActors(Player* player, Slave** slaves){
  player = initPlayer(10, 10, 10, 10, 0, HOME);
}

void init0Resources(){}

void init(Sector** sectors, Player* player, Slave** slaves){
  initRender();
  initInput();

  initSectors(sectors);
  initActors(player, slaves);

  init0Resources();
}
