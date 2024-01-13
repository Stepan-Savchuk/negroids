#include "../include/BuildingList.h"

BuildingList* newBuildingList(int nsize){
	BuildingList* tList = (BuildingList*) malloc(sizeof(BuildingList)+sizeof(Building)*nsize);
	tList->array = tArray;
	tList->size = nsize;
	tList->index = 0;
	tList->last = 0;
	return tList;
}

void delBuildingList(BuildingList** buildingList){
	free(*buildingList);
	*buildingList = NULL;
}


void addBuilding(BuildingList* buildingList, Building building){
	buildingList->array[buildingList->index] = building;
	if(buildingList->index == buildingList->last){
		buildingList->last++
	}
	
	buildingList->index++;

}

//FUCK. What if I only make two levels of buildings ant thus will make it more efficient to just make variables of buildings amount?

void removeBuilding(BuildingList* buildingList, BuildingID id, short level){
	//TODO : algorithm to find suitable element starting from end
	
	Building* tArray = buildingList->array;
	int tSize = buildingList->size;
	int tIndex = buildingList->index;
	int tLast = buildingList->last;

	for(int i = tLast; i >= 0; i--){
		//I want to break free
		if(tArray[i].id == id && tArray[i].level == level){
			tArray[i] = NULL;
			
			if(i == tLast) buildingList->last -= 1;
			buildingList->index = i;

			break;

		}
	}
}
