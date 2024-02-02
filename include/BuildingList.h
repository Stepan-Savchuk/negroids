#pragma once

#include "Building.h"

typedef struct BuildingList {
	Building* array;
	int size;
	int index;
	//Do I need this when I have size variable? YES, cause size of array may be higher than amount of filled elements
	int last;
} BuildingList;

BuildingList* newBuildingList(int nsize);
void delBuildingList(BuildingList** buildingList);

void addBuildingBL(BuildingList* buildingList, Building building);
void removeBuildingBL(BuildingList* buildingList, BuildingID id, short level);

void reallocBuildingList(BuildingList* buildingList, int nsize);

int getBuildingListSize(BuildingList buildingList){
  return buildingList.size;
}

Building getBuildingByIndex(BuildingList buildingList, int index);
