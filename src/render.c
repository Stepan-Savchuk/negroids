#include "../include/render.h"

char* gTiles = "PN~";
WINDOW* gWindow;

void initScreen(){
	gWindow = initscr();

	start_color();

	clear();
	refresh();
}

void initColors(){
	init_pair(1, COLOR_WHITE, COLOR_GREEN);
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

void drawTile(char tile, int x, int y, short color){
	move(x, y);
	
	if(color) attron(COLOR_PAIR(color));

	addch(tile);

	if(color) attron(COLOR_PAIR(color));
}
