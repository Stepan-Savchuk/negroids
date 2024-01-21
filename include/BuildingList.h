#include "Building.h"

typedef struct BuildingList {
	Building* array;
	int size;
	int index;
	//Do I need this when I have size variable? YES, cause size of array may be higher than amount of filled elements
	int last;
} List;

BuildingList* newBuildingList(int nsize);
void delBuildingList(BuildingList** buildingList);

void addBuilding(BuildingList* buildingList, Building building);
void removeBuilding(BuildingList* buildingList, BuildingID id, short level);

void reallocBuildingList(BuildingList* buildingList/*should have added value of size to which I wanna set dat list*/);

Building* getBuildingByIndex(BuildingList buildingList, int index);
