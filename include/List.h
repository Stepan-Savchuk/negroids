#include "Building.h"

typedef struct BuildingList {
	Building* array;
	int size;
	int lindex;
} List;

BuildingList newBuildingList(int nsize);
void delBuildingList(BuildingList** buildingList);

void addBuilding(BuildingList* buildingList, Building building);
void removeBuilding(BuildingList** buildingList, BuildingID id, short level);

int getProfit(BuildingList buildingList);
