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
	int buildLimit;
	//TODO Resources limit
	//buildLimit = 10 / (woodLimit+stoneLimit+flandsLimit
	//TODO добуті ресурси 2ох категорій: придатні і не придатні для будівництва
	int cWood;
	int cStone;
	int cMetal;
	int flandsLimit;
	Building buildings[buildLimit];
} Sector;
