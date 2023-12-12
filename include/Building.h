enum BuildingID {
	FARM_FIELD,
	MILL,
	MINE,
	SMITHY,
	STONE_MINE,
	QUARRY
	SAWMILL
};

typedef struct Building {
	enum BuildingID id; //type of building
	char* title;
	
	int cost;
	
	int profit;
	short level;
} Building;
