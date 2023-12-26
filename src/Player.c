#include "../include/Player.h"

//TODO define functions below

Player* initPlayer(short nhealth, short nstamina, short nmental, short nhunger, short nammo, SectorID ncsector){
	Player* player = (Player*) malloc(sizeof(Player));
	
	player->health = nhealth;
	player->stamina = nstamina;
	player->mental = nmental;
	player->hunger = nhunger;
	player->ammo = nammo;
	player->cSector = ncsector;

	return player;
}

void delPlayer(Player** player){
	free(*player);
	*player = NULL;
}

short getPlayerHealth(Player player){
	return player.health;
}

void setPlayerHealth(Player* player, short nhealth){
	player->health = nhealth;
}

short getPlayerStamina(Player player){
	return player.stamina;
}

void setPlayerStamina(Player* player, short nstamina){
	player->stamina = nstamina;
}

short getPlayerMental(Player player){
	return player.mental;
}

void setPlayerMental(Player* player, short nmental){
	player->mental = nmental;
}

short getPlayerHunger(Player player){
	return player.hunger;
}

void setPlayerHunger(Player* player, short nhunger){
	player->hunger = nhunger;
}

short getPlayerAmmo(Player player){
	return player.ammo;
}

void setPlayerAmmo(Player* player, short nammo){
	player->ammo = nammo;
}

SectorID getPlayerCSector(Player player){
	return player.SectorID;
}

void setPlayerCSector(Player* player, SectorID ncsector){
	player->cSector = ncsector;
}
