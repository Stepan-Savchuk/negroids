#include "../include/input.h"

void initInput(){
	cbreak();
	noecho();
}

void restoreInput(){
	nocbreak();
	echo();
}
