#include "../include/render.h"

char* tiles;
WINDOW* window;
int rows;
int cols;

void initTiles(){
	tiles = "P";
}

void initScreen(){
	window = initscr();

	cbreak();
        noecho();

	clear();
	refresh();
}

char getTile(size_t index){
	return tiles[index];
}

void endScreen(){
	clear();
	refresh();

	endwin();
	window = NULL;
}
