#pragma once

#include <stdlib.h>

typedef enum {
	FARM_FIELD,
	MILL,
	MINE,
	SMITHY,
	QUARRY,
	SAWMILL
} BuildingID;

typedef struct Building {
	BuildingID id; //type of building
	char* title;
	
	int cost;
	
	int profit;
	short level;
} Building;

Building* newBuilding(BuildingID nid, char* ntitle, int ncost, int nprofit, short nlevel);

void delBuilding(Building** building);

short getBuildingLevel(Building building);
void setBuildingLevel(Building* building, short nlevel);
