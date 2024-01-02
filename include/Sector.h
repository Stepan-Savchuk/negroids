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

//TODO : 1.Functions of adding and removing Buildings to list
//	 2.Functios of getting of resources profit
