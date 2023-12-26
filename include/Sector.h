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
	int cFlands;
	int buildLimit;
	int rBuildLimit;
	
	//Building* cBuildings = (Building*) malloc(sizeof(Building) * buildLimit);

	//Building* crBuildings = (Building*) malloc(sizeof(Building) * rBuildLimit);


	//I can also make some cashe variable????
	//
	//Я хуй його знає. що робити?масиви чи змінні? по
	//факту то є пофіг. але тоді виходить що дуже багато змінних. Може зробити union? Вповні можливо
} Sector;
