#include "../include/BuildingList.h"

//START//

BuildingList* newBuildingList(int nsize){
	BuildingList* tList = (BuildingList*) malloc(sizeof(BuildingList)+sizeof(Building)*nsize);
	tList->array = tArray;
	tList->size = nsize;
	tList->index = 0;
	tList->last = 0;
	return tList;
}


