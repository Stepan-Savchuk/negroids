#include "Building.h"

typedef enum {
	//8
	NORTHF,
	NORTH,
	PORT,
	HOME,
	EAST,
	EASTF,
	SOUTH,
	SOUTHF
} SectorID;

typedef struct Sector {
	SectorID id;
	int cWood;
	int cStone;
	int cMetal;
	int flands;
	int buildLimit;
	int metalBuildLimit;
	int flandsBuildLimit;
	
	Building* buildings;

	Building* metalBuildings;

	Building* flandsBuildings;
} Sector;

Sector* newSector(SectorID nid, int ncwood, int ncstone, int ncmetal, int nflands);
void delSector(Sector** sector);

void reallocBuildLimit(Sector* sector);

void addBuilding(Sector* sector, Building building);
void removeBuilding(Sector* sector, /*type of building*/, /*level of building*/);

void upgradeBuilding(Sector* sector, BuildingID id, short baseLevel);

int getProfit(Sector* sector);
int getStoneProfit(Sector* sector);
int getMetalProfit(Sector* sector);
int getWoodProfit(Sector* sector);
