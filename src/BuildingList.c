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
	if(buildingList->index == buildingList->last){buildingList->last++}
	buildingList->index++;

}

void removeBuilding(BuildingList* buildingList, BuildingID id, short level){
	//TODO : algorithm to find suitable element starting from end
}
