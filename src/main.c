#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "../include/init.h"
#include "../include/input.h"


int input(){
	return 0;
}

void render(){
}

void mainLoop(){
	/*while(true){

	}*/
}

void end(){
}


Building bFarmField = {FARM_FIELD, "Farming field", 0, 10, 1};
Building bMill = {MILL, "Mill", 50, 40, 1};
Building bMine = {MINE, "Mine", 20, 20, 1};
Building bSmithy = {SMITHY, "Smithy", 25, 30, 1};
Building bQuarry = {QUARRY, "Quarry", 25, 25, 1};
Building bSawmill = {SAWMILL, "Sawmill", 25, 25, 1};
Building bMansion = {HOUSE  , "Home", 25, 0, 1};
Building bBarracks = {BARRACKS, "Barracks", 25, 0, 1};
Building bServHouse = {SERV_HOUSE, "Servers House", 25, 0, 1};


/* Build Limit for metal buildings =  sector.metal /1000
 * Build Limit for fertile lands = sector.flands / 1000
 * Build Limit for other buildings = 5000/ 1(metal + flands + wood + stone)*/

void test(Player testPlayer, Slave* testSlaves){
  printf("TEST START\n");

  printf("Test Player Health = %d\n", getPlayerHealth(testPlayer));
  printf("Test Player Stamina = %d\n", getPlayerStamina(testPlayer));

  for (int i=0; i<9; i++) {
    printf("Test Slave ID = %d\n", getSlaveID(testSlaves[i]));
    printf("Test Slave Health = %d\n", getSlaveHealth(testSlaves[i]));
  }

  printf("TEST END\n");
}


int main(){

  //NOTE : For now I'll make resource values global(maybe forever)
 int gWood = 100;
 int gStone = 100;
 int gMetal = 0;
 int gWheat = 0;
 int gFlour = 100;
 int gSteel = 0;
 

 Sector* homeSector = newSector(HOME, 500, 500, 250, 500);
 Sector* portSector = newSector(PORT, 500, 1250, 0, 0);
 Sector* norternSector = newSector(NORTH, 250, 750, 500, 250);
 Sector* northFarSector = newSector(NORTHF, 0, 1000, 750, 0);
 Sector* easternSector = newSector(EAST, 750, 250, 0, 750);
 Sector* eastFarSector = newSector(EASTF, 1000, 500, 250, 0);
 Sector* southernSector = newSector(SOUTH, 500, 250, 250, 750);   Sector* southFarSector = newSector(SOUTHF, 250, 250, 250, 1000);
 
 
 Player* gPlayer;
 //Slaves array
 Slave* gSlaves = malloc(sizeof(Slave)*8);
 
 
init(&gPlayer, &gSlaves);

 
 test(*gPlayer, gSlaves);


 return 0;
}
