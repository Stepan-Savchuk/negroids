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
	enum SectorID;
	int buildLimit;
	//TODO Resources limit
	Building buildings[buildLimit];
} Sector;
