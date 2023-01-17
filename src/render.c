#include "../include/render.h"

char* tiles = "PN";
WINDOW* window;
int rows;
int cols;

void initTiles(){
	
}

void initScreen(){
	window = initscr();

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
	char tile = tiles[index];
	return tile;
}

void drawTile(char tile, int x, int y){
	move(x, y);
	
	addch(tile);

	refresh();
}
