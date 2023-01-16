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

	/*
	cbreak();      Put this block into input.h later
        noecho();
	*/
	clear();
	refresh();
}

void endScreen(){
        clear();
        refresh();

        endwin();
        window = NULL;
}


char getTile(size_t index){
	return tiles[index];
}

void drawTile(char tile, int x, int y){
	move(x, y);
	
	addch(tile);

	refresh();
}
