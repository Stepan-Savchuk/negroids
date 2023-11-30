enum BuildingID {
	FARM_FIELD,
	MINE,
	STONE_MINE,
	MILL,
	SAWMILL,
	SMITHY,
	//Будівля для обробки каменю
};

typedef struct Building {
	short ; //type of building
	char* title;
	int cost;
	short level;
} Building;
