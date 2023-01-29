#include "i_curses.h"

void initScreen();

void initColors();

void endScreen();

char getTile(size_t index);

void drawTile(char tile, int x, int y, short color);
