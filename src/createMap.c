#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float interpolate(float min, float max, float w){
	if(0.0 > w) return min;
	if(1.0 < w) return max;

//	interpolation funxtions which i took from wikipedia
//	i use third one because it is said that it gives smoother step
//	return (max - min) * w + min;

//	return (max - min) * (3.0 - w * 2.0) * w*w + min;

	return (max - min) * ((w * (w * 6.0 - 15.0) + 10.0) * w*w*w) + min;
}

int main(){
	FILE* map;
	map = fopen("map.txt", "w");
	
	for(int i = 0; i < 10000; i++){
		fputc('~', map);
	}

	fclose(map);
	//int rn = (rand() % (12 - 1 + 1)) + 1; formula from webto get random numbers in given range
	printf("%f \n", interpolate(8.0, 32.0, 0.6));
	return 0;
}
