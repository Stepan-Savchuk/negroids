#include "../include/init.h"
#include <stdlib.h>
#include <unistd.h>


void initRender(){
  //system("clear");
}

void initInput(){}

void initActors(Player** player, Slave** slaves){
  *player = initPlayer(10, 10, 10, 10, 0, HOME);
  
  //NOTE: Initial testing count of slaves is 9
  
  //Slave tSlaves[9];

  for (int i = 0; i < 9; i++) {
    slaves[i] = newSlave(i, "Slave", randShort(1, 10), randShort(1, 10), randShort(1, 10), randShort(1, 10), randShort(1, 10), randShort(1, 10), randShort(1, 10), randShort(1, 10), randShort(1, 7), HOME);
  }
}

void init(Player** player, Slave** slaves){
  initRender();
  initInput();

  Player* tPlayer;
  Slave* tSlaves;

  initActors(&tPlayer, &tSlaves);
  *player = tPlayer;
  *slaves = tSlaves;

  printf("Test1 Slave0 health = %d\n", getSlaveHealth(tSlaves[0]));
  printf("Test1 Slave0 stamina = %d\n", getSlaveStamina(tSlaves[0]));
  printf("Test1 Slave0 Sector = %d\n", getSlaveCSector(tSlaves[0]));
}
