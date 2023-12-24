#include "../include/Player.h"

//TODO define functions below

Player* initPlayer(short nhealth, short nstamina, short nmental, short nhunger, short nammo, SectorID ncsector);

void delPlayer(Player** player);

short getPlayerHealth(Player player);

void setPlayerHealth(Player* player, short nhealth);

short getPlayerStamina(Player player);

void setPlayerStamina(Player* player, short nstamina);

short getPlayerMental(Player player);

void setPlayerMental(Player* player, short nmental);

short getPlayerHunger(Player player);

void setPlayerHunger(Player* player, short nhunger);

short getPlayerAmmo(Player player);

void setPlayerAmmo(Player* player, short nammo);

SectorID getPlayerCSector(Player player);

void setPlayerCSector(Player* player, SectorID ncSector);
