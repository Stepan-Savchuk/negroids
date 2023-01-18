#include "../include/input.h"

void initInput(){
	//cbreak();
	//nodelay(stdscr, TRUE);
	halfdelay(0);
	noecho();
}

void restoreInput(){
	nocbreak();
	//nodelay(stdscr, FALSE);
	echo();
}
