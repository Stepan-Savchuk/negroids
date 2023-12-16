#include "../include/Building.h"

Building* newBuilding(BuildingID nid, char* ntitle, int ncost, int nprofit, short nlevel){
	Building tBuilding = {nid, ntitle, ncost, nprofit, nlevel};
	return &tBuilding;
}

void delBuilding(Building* building){
	*building = {NULL, NULL, NULL, NULL, NULL};
	building = NULL;
}

short getBuildingLevel(Building building){
	return building.level;
}
void setBuildingLevel(Building* building, short nlevel){
	building->level = nlevel;
}
