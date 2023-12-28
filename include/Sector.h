#include "Building.h"

typedef enum {
	//8
	NORTHF,
	NORTH,
	PORT,
	HOME,
	EAST,
	EASTF,
	SOUTH,
	SOUTHF
} SectorID;

typedef struct Sector {
	SectorID id;
	int cWood;
	int cStone;
	int cMetal;
	int flands;
	int buildLimit;
	int metalBuildLimit;
	int flandsBuildLimit;
	
	Building* cBuildings;

	Building* cMetalBuildings;

	Building* cFlandsBuildLimit;


	//I can also make some cashe variable????
	//
	//Я хуй його знає. що робити?масиви чи змінні? по
	//факту то є пофіг. але тоді виходить що дуже багато змінних. Може зробити union? Вповні можливо
} Sector;

Sector* newSector(SectorID nid, int ncwood, int ncstone, int ncmetal, int nflands);
void delSector(Sector** sector);
