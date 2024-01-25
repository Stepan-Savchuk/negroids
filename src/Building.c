#include "../include/Building.h"

Building* newBuilding(BuildingID nid, char* ntitle, int ncost, int nprofit, short nlevel){
	Building* building = (Building*) malloc(sizeof(Building));

	building->id = nid;
	building->title = ntitle;
	building->cost = ncost;
	building->profit = nprofit;
	building->level = nlevel;

	return building;
}

void delBuilding(Building** building){
	free(*building);
	*building = NULL;
}

BuildingID getBuildingID(Building building){
	return building.id;
}

short getBuildingLevel(Building building){
	return building.level;
}
void setBuildingLevel(Building* building, short nlevel){
	building->level = nlevel;
}
