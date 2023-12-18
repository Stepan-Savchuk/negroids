#include "../include/Building.h"

Building* newBuilding(BuildingID nid, char* ntitle, int ncost, int nprofit, short nlevel){
	Building* pBuilding = (Building*) malloc(sizeof(Building));

	Building tBuilding = {nid, ntitle, ncost, nprofit, nlevel};

	pBuilding = &tBuilding;
	return pBuilding;
}

void delBuilding(Building *building){
	free(building);
	building = NULL;
}

short getBuildingLevel(Building building){
	return building.level;
}
void setBuildingLevel(Building* building, short nlevel){
	building->level = nlevel;
}
