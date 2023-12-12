typedef enum {
	FARM_FIELD,
	MILL,
	MINE,
	SMITHY,
	STONE_MINE,
	QUARRY
	SAWMILL
} BuildingID;

typedef struct Building {
	enum BuildingID id; //type of building
	char* title;
	
	int cost;
	
	int profit;
	short level;
} Building;

Building* newBuilding(BuildingID nid, char* ntitle, int ncost, int nprofit, short nlevel);

void delBuilding(Building* building);
