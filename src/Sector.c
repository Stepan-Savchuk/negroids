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
	/*BuildingList* tBuildings = *sector.buildings;
	BuildingList* tMetalBuildings = *sector.metalBuildings;
	BuildingList* tFLandsBuildings = *sector.flandsBuildings;
	*/

	Sector* tSector = *sector;

	BuildingList* tBuildings = tSector->buildings;
	BuildingList* tMetalBuildings = tSector->metalBuildings;
	BuildingList* tFLandsBuildings = tSector->flandsBuildings;

	delBuildingList(&tBuildings);
	delBuildingList(&tMetalBuildings);
	delBuildingList(&tFLandsBuildings);
	
	
	free(*sector);
	*sector = NULL;
}

void reallocBuildLimit(Sector* sector){
	sector->buildLimit = 100 / (sector->cWood + sector->cStone + sector->cMetal + sector->flands);
	sector->metalBuildLimit = sector->cMetal / 10;
	sector->flandsBuildLimit = sector->flands / 10;

	sector->buildings = (BuildingList*) realloc(sector->buildings, sizeof(BuildingList) + sizeof(Building) * sector->buildLimit);
	sector->metalBuildings = (BuildingList*) realloc(sector->metalBuildings, sizeof(BuildingList) + sizeof(Building) * sector->metalBuildLimit);
	sector->flandsBuildings = (BuildingList*) realloc(sector->flandsBuildings, sizeof(BuildingList) + sizeof(Building) * sector->flandsBuildLimit);
}

void addBuildingS(Sector* sector, Building building){
  if (building.id == 0) {
    addBuildingBL(sector->flandsBuildings, building);
  } else if (building.id == 2) {
    addBuildingBL(sector->metalBuildings, building);
  } else if (building.id == 1 || building.id > 2) {
    addBuildingBL(sector->buildings, building);
  }
}

void removeBuildingS(Sector* sector, BuildingID id, short level){
	if (id == 0) {
    removeBuildingBL(sector->flandsBuildings, id, level);
  } else if (id == 2) {
    removeBuildingBL(sector->metalBuildings, id, level);
  } else if (id == 1 || id > 2) {
    removeBuildingBL(sector->buildings, id, level);
  }
}

void upgradeBuilding(Sector* sector, BuildingID id, short baseLevel){
  if (id == 0) {
    upgradeBuildingByIndex(sector->flandsBuildings, getIndexofBuilding(*sector->flandsBuildings, id, baseLevel));
  } else if (id == 2) {
    upgradeBuildingByIndex(sector->flandsBuildings, getIndexofBuilding(*sector->metalBuildings, id, baseLevel)); 
  } else if (id == 1 || id > 2) {
    upgradeBuildingByIndex(sector->flandsBuildings, getIndexofBuilding(*sector->buildings, id, baseLevel));
  }
}

// TODO : Thosr are temporal values before I make a formula

int getWheatProfit(Sector sector){
  return sector.flands;
}

int getStoneProfit(Sector sector){
  return sector.cStone;
}
int getMetalProfit(Sector sector){
  return sector.cMetal;
}
int getWoodProfit(Sector sector){
  return sector.cWood;
}
