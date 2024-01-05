#include "Building.h"
#include "BuildingList.h"

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
	
	BuildingList buildings;

	BuildingList metalBuildings;

	BuildingList flandsBuildings;
} Sector;

Sector* newSector(SectorID nid, int ncwood, int ncstone, int ncmetal, int nflands);
void delSector(Sector** sector);

void reallocBuildLimit(Sector* sector);

void addBuilding(Sector* sector, Building building);
void removeBuilding(Sector* sector, BuildingID id, short level);

void upgradeBuilding(Sector* sector, BuildingID id, short baseLevel);

int getWheatProfit(Sector* sector);
int getStoneProfit(Sector* sector);
int getMetalProfit(Sector* sector);
int getWoodProfit(Sector* sector);
