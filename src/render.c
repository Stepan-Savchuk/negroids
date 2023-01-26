#include "../include/render.h"

char* gTiles = "PN~";
WINDOW* gWindow;

void initScreen(){
	gWindow = initscr();

	start_color();

	clear();
	refresh();
}

void endScreen(){
        clear();
        refresh();

        endwin();
        gWindow = NULL;
}


char getTile(size_t index){
	char tile = gTiles[index];
	return tile;
}

void drawTile(char tile, int x, int y, bool isColor){
	move(x, y);
	
	if(isColor) attron();

	addch(tile);
}
