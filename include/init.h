#include "render.h"

#include "rand.h"

#include "../include/Building.h"
#include "../include/Sector.h"
#include "../include/Player.h"
#include "../include/Slave.h"



void initRender();

void initInput();

void initSectors(Sector** sectors);
void initActors(Player* player, Slave** slaves);

void init0Resources();

void init(Sector** sectors, Player* player, Slave** slaves);
