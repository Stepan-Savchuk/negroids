#include "../include/Sector.h"

Sector* newSector(SectorID nid, int ncwood, int ncstone, int ncmetal, int nflands){
	//100 is aproximate value

	int tBuildLimit = 100 / (ncwood + ncstone + ncmetal + nflands);
	int tmetalBuildLimit = ncmetal / 100;
	int tflandsBuildLimit = nflands / 100;


	/*
	Building* tBuildings = (Building*) malloc(sizeof(Building) * tBuildLimit);
	Building* tmetalBuildings = (Building*) malloc(sizeof(Building) * tmetalBuildLimit);
	Building* tflandsBuildings = (Building*) malloc(sizeof(Building) * tflandsBuildLimit);
	*/


	Sector* tSector = (Sector*) malloc(sizeof(Sector));

	tSector->id = nid;
	tSector->cWood = ncwood;
	tSector->cStone = ncstone;
	tSector->cMetal = ncmetal;
	tSector->flands = nflands;
	tSector->buildLimit = tBuildLimit;
	tSector->metalBuildLimit = tmetalBuildLimit;
	tSector->flandsBuildLimit = tflandsBuildLimit;
	
	tSector->buildings = newBuildingList(tBuildLimit);
	
	tSector->metalBuildings = newBuildingList(tmetalBuildLimit);
	tSector->flandsBuildings = newBuildingList(tflandsBuildLimit);

	return tSector;
}

void delSector(Sector** sector){
	free(*sector->buildings);
	*sector->buildings = NULL;
	free(*sector->metalBuildings);
	*sector->metalBuildings = NULL;
	free(*sector->flandsBuildings);
	*sector->flandsBuildings = NULL;
	
	free(*sector);
	*sector = NULL;
}

void reallocBuildLimit(Sector* sector){
	sector->buildLimit = 100 / (sector->cWood + sector->cStone + sector->cMetal + sector->flands);
	sector->metalBuildLimit = sector->cMetal / 10;
	sector->flandsBuildLimit = sector->flands / 10;

	sector->buildings = (Building*) realloc(sector->buildings, sizeof(Building) * sector->buildLimit);
	sector->metalBuildings = (Building*) realloc(sector->metalBuildings, sizeof(Building) * sector->metalBuildLimit);
	sector->flandsBuildings = (Building*) realloc(sector->flandsBuildings, sizeof(Building) * sector->flandsBuildLimit);
}

void addBuildingS(Sector* sector, Building building){
	//START
	
}

void removeBuildingS(Sector* sector, BuildingID id, short level);

void upgradeBuilding(Sector* sector, Building id, short baseLevel);

int getProfit();
int getStoneProfit();
int getMetalProfit();
int getWoodProfit();
