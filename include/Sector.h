enum SectorID {
	//8
	NORTHF,
	NORTH,
	PORT,
	HOME,
	EAST,
	EASTF,
	SOUTH,
	SOUTHF
};

typedef struct Sector {
	enum SectorID id;
	//TODO Resources limit
	//buildLimit = 10 / (woodLimit+stoneLimit+flandsLimit
	//TODO добуті ресурси 2ох категорій: придатні і не придатні для будівництва
	int cWood = NULL;
	int cStone = NULL;
	int cMetal = NULL;
	int flandsLimit = NULL;
	int buildLimit = 10 / (woodLimit + stoneLimit +flandsLimit);
	Building* buildings = (Building*) malloc(sizeof(Building) * buildLimit);
} Sector;
