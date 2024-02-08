#include <cinttypes>
#include <stdio.h>
#include <unistd.h>

#include "../include/render.h"
#include "../include/input.h"

#include "../include/Building.h"
#include "../include/Sector.h"

void initRender(){
	//initScreen();
}

void init(){
	//initRender();
	//initInput();
}

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

//TODO : Add barracks building and probably home building which can be upgraded

Building bFarmField = {FARM_FIELD, "Farming field", 0, 10, 1};
Building bMill = {MILL, "Mill", 50, 40, 1};
Building bMine = {MINE, "Mine", 20, 20, 1};
Building bSmithy = {SMITHY, "Smithy", 25, 30, 1};
Building bQuarry = {QUARRY, "Quarry", 25, 25, 1};
Building bSawmill = {SAWMILL, "Sawmill", 25, 25, 1};


void test(){
  Sector* tSector = newSector(HOME, 100, 50, 25, 200);

  printf("Test0: Wheat profit = %d", getWheatProfit(*tSector));

  addBuildingS(tSector, bFarmField);
  addBuildingS(tSector, bQuarry);
  printf("TEST1");
  printf("TEST1");

  //TODO : I need to properly define formulas of build limit or change values in the test call or Sectpr constructor

  //Changint of buildLimit here
  reallocBuildLimit(tSector);
  printf("TEST2");

  removeBuildingS(tSector, FARM_FIELD, 1);
  printf("TEST3");

  addBuildingS(tSector, bMine);
  printf("TEST4");

  removeBuildingS(tSector, QUARRY, 1);
  printf("TEST5");

  upgradeBuilding(tSector, MINE, 1);
  printf("TEST6");




  delSector(&tSector);
}


int main(){

	init();

	mainLoop();

	test();

	end();

	return 0;
}
