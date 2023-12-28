#include "../include/Sector.h"

Sector* newSector(SectorID nid, int ncwood, int ncstone, int ncmetal, int nflands){
	//100 is aproximate value

	int tBuildLimit = 100 / (ncwood + ncstone + ncmetal + ncflands);
	int tmetalBuildLimit = ncmetal / 100;
	int tflandsBuildLimit = ncflands / 100;

	//Sector* tSector = (Sector*) malloc(sizeof(Sector) + sizeof(Building*) * (tBuildLimit+tmetalBuildLimit+tflandsBuildLimit));
	//TODO : change Sector structure Building pointers to just links in structure and then create separate method which initializes those dynamic arrays for Buildings.

}

void delSector(Sector** sector){}
