#include <stdio.h>
#include <unistd.h>

#include "../include/render.h"
#include "../include/input.h"

#include "../include/Building.h"
#include "../include/BuildingList.h"
#include "../include/Player.h"

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

Building bFarmField = {FARM_FIELD, "Farming field", 0, 10, 1};
Building bMill = {MILL, "Mill", 50, 40, 1};
Building bMine = {MINE, "Mine", 20, 20, 1};
Building bSmithy = {SMITHY, "Smithy", 25, 30, 1};
Building bQuarry = {QUARRY, "Quarry", 25, 25, 1};
Building bSawmill = {SAWMILL, "Sawmill", 25, 25, 1};


void test(){
	//TODO : Test dit freacking functions
	BuildingList* pBuildingList = newBuildingList(1);
	addBuildingBL(pBuildingList, bMill);
	
  Building tBuilding = getBuildingByIndex(*pBuildingList, 0);
	
  printf("Test building ID = %d and level = %d \n", getBuildingID(tBuilding), getBuildingLevel(tBuilding));
	
  removeBuildingBL(pBuildingList, MILL, 1);
  tBuilding = getBuildingByIndex(*pBuildingList, 0);
	
  printf("Test building ID = %d and level = %d \n", getBuildingID(tBuilding), getBuildingLevel(tBuilding));
	
  reallocBuildingList(pBuildingList, 2);

  addBuildingBL(pBuildingList, bSmithy);
  addBuildingBL(pBuildingList, bSawmill);

  tBuilding = getBuildingByIndex(*pBuildingList, 0);
  printf("Test building ID = %d and level = %d \n", getBuildingID(tBuilding), getBuildingLevel(tBuilding));

  tBuilding = getBuildingByIndex(*pBuildingList, 1);
  printf("Test building ID = %d and level = %d \n", getBuildingID(tBuilding), getBuildingLevel(tBuilding));

  removeBuildingBL(pBuildingList, SMITHY, 1);
  removeBuildingBL(pBuildingList, SAWMILL, 1);

  tBuilding = getBuildingByIndex(*pBuildingList, 0);
  printf("Test building ID = %d and level = %d \n", getBuildingID(tBuilding), getBuildingLevel(tBuilding));
  tBuilding = getBuildingByIndex(*pBuildingList, 1);
  printf("Test building ID = %d and level = %d \n", getBuildingID(tBuilding), getBuildingLevel(tBuilding));



  printf("Size of test building list = %d \n", getBuildingListSize(*pBuildingList));
  
  delBuildingList(&pBuildingList);
  printf("Size of test building list = %d \n", getBuildingListSize(*pBuildingList));
}

int main(){

	init();

	mainLoop();

	test();

	end();

	return 0;
}
