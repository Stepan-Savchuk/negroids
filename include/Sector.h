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
	int cWood = NULL;
	int cStone = NULL;
	int cMetal = NULL;
	int cFlands = NULL;
	int buildLimit = 10 / (cWood + cStone +flandsLimit);
	int rBuildLimit = (cStone + cMetal);//builds<=rBuildLimit
	
	Building* cBuildings = (Building*) malloc(sizeof(Building) * buildLimit);

	Building* crBuildings = (Building*) malloc(sizeof(Building) * rBuildLimit);


	//I can also make some cashe variable????
	//
	//Я хуй його знає. що робити?масиви чи змінні? по
	//факту то є пофіг. але тоді виходить що дуже багато змінних. Може зробити union? Вповні можливо
} Sector;
