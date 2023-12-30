#include "../include/Sector.h"

Sector* newSector(SectorID nid, int ncwood, int ncstone, int ncmetal, int nflands){
	//100 is aproximate value

	int tBuildLimit = 100 / (ncwood + ncstone + ncmetal + ncflands);
	int tmetalBuildLimit = ncmetal / 100;
	int tflandsBuildLimit = ncflands / 100;

	Building* tBuildings = (Building*) malloc(sizeof(Building) * tBuildLimit);
	Building* tmetalBuildings = (Building*) malloc(sizeof(Building) * tmetalBuildLimit);
	Building* tflandsBuildings = (Building*) malloc(sizeof(Building) * tflandsBuildLimit);

	Sector* tSector = (Sector*) malloc(sizeof(Sector));

	tSector->id = nid;
	tSector->cWood = ncwood;
	tSector->cStone = ncstone;
	tSector->cMetal = ncmetal;
	tSector->flands = nflands;
	tSector->buildLimit = tBuildLimit;
	tSector->metalBuildLimit = tmetalBuildLimit;
	tSector->flandsBuildLimit = tflandsBuildLimit;
	tSector->buildings = tBuildings;
	tSector->metalBuildings = tmetalBuildings;
	tSector->flandsBuildings = tflandsBuildings;

	return tSector;
}

void delSector(Sector** sector){}
