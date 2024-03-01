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

void test(){
  printf("Random test number = %d \n", randShort(1, 10));
}


int main(){
  /*
  Sector* homeSector;
  Sector* portSector;
  Sector* norternSector;
  Sector* northFarSector;
  Sector* easternSector;
  Sector* eastFarSector;
  Sector* southernSector;
  Sector* southFarSector;
  
  Sector* tSectors = (Sector*) malloc(sizeof(Sector)*8);
  free(tSectors);
  tSectors = NULL;
  */

  //init(tSectors);

  test();


  return 0;
}
