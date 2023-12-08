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
	int cFlands = NULL;
	int buildLimit = 10 / (cWood + cStone +flandsLimit);
	int rBuildLimit = (cStone + cMetal);//builds<=rBuildLimit
	
	
	int IBuilds;
	int IIBuilds;
	int IIIBuilds;
	int IVBuilds;

	int IbBuilds;
	int IIbBuilds;
	int IIIbBuilds;
	int IVbBuilds;
	
	//buildTypeArray??ID??[dynamicbuildLimit] = {1, 10, 20, 30, 400};
	//I can also make some cashe variable????
	//
	//Я хуй його знає. що робити?масиви чи змінні? по
	//факту то є пофіг. але тоді виходить що дуже багато змінних. Може зробити union? Вповні можливо
} Sector;
