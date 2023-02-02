#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE* map;
	map = fopen("map.txt", "w");
	
	for(int i = 0; i < 10000; i++){
		fputc('~', map);
	}

	fclose(map);
	//int rn = (rand() % (12 - 1 + 1)) + 1; formula from webto get random numbers in given range

	return 0;
}
