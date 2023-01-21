#include "../include/input.h"

void initInput(){
	//cbreak();			Legacy code for testing
	//nodelay(stdscr, TRUE);
	halfdelay(0);
	noecho();
}

void restoreInput(){
	nocbreak();
	//nodelay(stdscr, FALSE);	Same shit as in comment above
	echo();
}
