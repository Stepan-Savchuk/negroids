#include "../include/input.h"

void initInput(){
	cbreak();
	nodelay(stdscr, TRUE);
	noecho();
}

void restoreInput(){
	nocbreak();
	nodelay(stdscr, FALSE);
	echo();
}
