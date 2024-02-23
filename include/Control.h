#include "Building.h"
#include "Player.h"
#include "Slave.h"
#include "Overseer.h"
//TODO : Make Commands for controlling da shit

typedef enum cMenu{
  MAIN,
  BUILDING,
  PEOPLE,
  STATUS,
  TRADE
} cMenu;

void hitSlavePlayer(Player* player, Slave* slave);
void hitSlaveOverseer(Overseer* overseer, Slave* slave);

void shootSlavePlayer(Player* player, Slave* slave);
void shootSlaveOverseer(Overseer* overseer, Slave* slave);

bool checkPlayerLife(Player player);
bool checkOverseerLife(Overseer overseer);
bool checkSlaveLife(Slave slave);

bool checkPlayerMental(Player player);
bool checkOverseerMental(Overseer overseer);
bool checkSlaveMental(Slave slave);

//TODO : IN PROGRESS

int getTotalProfit();

void initNextDay();

void shipArrival();

cMenu openMenu(cMenu menu);
