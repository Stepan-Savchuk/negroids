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


/* Build Limit for metal buildings =  sector.metal /1000
 * Build Limit for fertile lands = sector.flands / 1000
 * Build Limit for other buildings = 5000/ 1(metal + flands + wood + stone)*/

void test(){
  Sector* tSector = newSector(HOME, 750, 500, 250, 500);

  printf("Test0: Wheat profit = %d \n", getWheatProfit(*tSector));

  addBuildingS(tSector, bFarmField);
  addBuildingS(tSector, bQuarry);
  printf("Building0 ID = %d \n", getBuildingID(getBuildingByIndex(*tSector->flandsBuildings, 0)));
  printf("Building1 ID = %d \n", getBuildingID(getBuildingByIndex(*tSector->buildings, 1)));


  printf("Build Limit0 = %d \n", tSector->buildLimit);
  tSector->cWood = 0;
  reallocBuildLimit(tSector);
  printf("Build Limit1 = %d \n", tSector->buildLimit);

  removeBuildingS(tSector, FARM_FIELD, 1);
  printf("Building0 ID = %d \n", getBuildingID(getBuildingByIndex(*tSector->flandsBuildings, 0)));

  addBuildingS(tSector, bMill);
  int tIndex = getIndexofBuilding(*tSector->buildings, MILL, 1);
  printf("BuildingN ID = %d and its position = %d \n", getBuildingID(getBuildingByIndex(*tSector->buildings, tIndex)), tIndex);

  removeBuildingS(tSector, QUARRY, 1);
  printf("Building1 ID = %d \n", getBuildingID(getBuildingByIndex(*tSector->buildings, 1)));

  upgradeBuilding(tSector, MILL, 1);
  printf("BuildingN level = %d \n", getBuildingLevel(getBuildingByIndex(*tSector->buildings, tIndex)));




  delSector(&tSector);
  printf("Test1: Wheat profit = %d \n", getWheatProfit(*tSector));
}


int main(){

	init();

	mainLoop();

	test();

	end();

	return 0;
}
