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
	getmaxyx(window, rows, cols);
	printf("lines = %d and cols = %d", rows, cols);
}

char getTile(size_t index){
	return tiles[index];
}

void endScreen(){
	endwin();
	window = NULL;
}
