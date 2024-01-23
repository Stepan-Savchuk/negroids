#include <stdio.h>
#include <unistd.h>

#include <time.h>

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
	addBuilding(pBuildingList, bMill);
	Building tBuilding = getBuildingByIndex(pBuildingList, 0);
	printf("Test building ID = %d", getBuildingID(tBuildingID));
	removeBuilding(pBuildingList, MILL, 1);
	printf("Test building ID = %d", getBuildingID(tBuildingID));
	reallocBuildingList(BuildingList* pbuildingList, 2);
}

int main(){

	init();

	mainLoop();

	test();

	end();

	return 0;
}
