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
    Slave* tSlave = newSlave(i, "Slave", randShort(1, 10), randShort(1, 10), randShort(1, 10), randShort(1, 10), randShort(1, 10), randShort(1, 10), randShort(1, 10), randShort(1, 10), randShort(1, 7), HOME);

    slaves[i] = tSlave;
  }
}

void init(Player** player, Slave** slaves){
  initRender();
  initInput();

  Player* tPlayer;

  initActors(&tPlayer, slaves);
  *player = tPlayer;

  printf("Test1 Player health = %d\n", getPlayerHealth(*tPlayer));
  printf("Test1 Player stamina = %d\n", getPlayerStamina(*tPlayer));
  printf("Test1 Player Sector = %d\n", getPlayerCSector(*tPlayer));
}
