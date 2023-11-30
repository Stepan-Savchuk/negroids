#include "Sector.h"

typedef struct Slave {
	int id;
	char* name;

	short health;
        short stamina;
        short mental;
        short hunger;
        short horny;
	short strength;
	short speed;
	short beauty;
	short spec;

        enum Sector cSector;
} Slave;
