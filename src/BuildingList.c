#include "../include/BuildingList.h"

static const Building nullBuilding;

BuildingList* newBuildingList(int nsize){
	BuildingList* tList = (BuildingList*) malloc(sizeof(BuildingList)+sizeof(Building)*nsize);
	tList->size = nsize;
	tList->index = 0;
	tList->last = 0;
	return tList;
}

void delBuildingList(BuildingList** buildingList){
	free(*buildingList);
	*buildingList = NULL;
}


void addBuildingBL(BuildingList* buildingList, Building building){
	buildingList->array[buildingList->index] = building;
	if(buildingList->index == buildingList->last){
		buildingList->last++;
	}
	
	buildingList->index++;

}

//FUCK. What if I only make two levels of buildings ant thus will make it more efficient to just make variables of buildings amount?

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
	realloc(buildingList, sizeof(BuildingList)+sizeof(Building)*nsize);
}

Building* getBuildingByIndex(BuildingList buildingList, int index){
	return buildingList.array[index];
}
