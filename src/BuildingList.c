#include "../include/BuildingList.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static const Building nullBuilding;

BuildingList* newBuildingList(int nsize){
	Building* tArray = (Building*) malloc(sizeof(Building) * nsize);

	BuildingList* tList = (BuildingList*) malloc(sizeof(BuildingList));

	tList->array = tArray;
	tList->size = nsize;
	tList->index = 0;
	tList->last = 0;
	return tList;
}

void delBuildingList(BuildingList** buildingList){
	BuildingList* tBuildingList = *buildingList;

	Building* tArray = tBuildingList->array;

	delBuilding(&tArray);

	free(*buildingList);
	*buildingList = NULL;
}

void addBuildingBL(BuildingList* buildingList, Building building){
	int tIndex = buildingList->index;
  
  buildingList->array[tIndex] = building;

	if(tIndex == buildingList->last){
		buildingList->last++;
    buildingList->index++;
    return;
	}
	
  while (tIndex<buildingList->last) {
    if (getBuildingLevel(getBuildingByIndex(*buildingList, tIndex++)) != 0) {
      tIndex++;
    }
    else {
      buildingList->index = ++tIndex;
      break;
    }
  }
}

void removeBuildingBL(BuildingList* buildingList, BuildingID id, short level){
	Building* tArray = buildingList->array;
	int tSize = buildingList->size;
	int tIndex = buildingList->index;
	int tLast = buildingList->last;

	for(int i = tLast; i >= 0; i--){
		//I want to break free
		if(tArray[i].id == id && tArray[i].level == level){
			tArray[i] = nullBuilding;
			
			if(i == tLast) buildingList->last -= 1;
			buildingList->index = i;

			break;

		}
	}
}

void reallocBuildingList(BuildingList* buildingList, int nsize){
	//This function only increases memory amount for structure
	buildingList->array = realloc(buildingList->array, sizeof(Building)*nsize);
	buildingList = realloc(buildingList, sizeof(BuildingList));
}

int getBuildingListSize(BuildingList buildingList){
  return buildingList.size;
}

Building getBuildingByIndex(BuildingList buildingList, int index){
	return buildingList.array[index];
}

//Debug dis shit
void upgradeBuildingByIndex(BuildingList* buildingList, int index){
  Building* tBuilding = &buildingList->array[index];
  short tLevel = getBuildingLevel(getBuildingByIndex(*buildingList, index));
  tLevel++;
  setBuildingLevel(tBuilding, tLevel);
}

int getIndexofBuilding(BuildingList buildingList, BuildingID id, short level){
  for (int i = 0; i <= buildingList.last; i++) {
    if (buildingList.array[i].id == id && buildingList.array[i].level == level) {
      return i;
    }
  }
  return -1;
}
