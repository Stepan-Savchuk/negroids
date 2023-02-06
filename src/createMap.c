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

typedef struct Vector2 {
	float x, y;
} Vector2;

Vector2 randomGradient(int x, int y){
	const unsigned w = 8 * sizeof(unsigned);
	const unsigned s = w / 2;
	
	unsigned a = x, b = y;
	
	a *= 3284157443;

	b ^= a << s | a >> w-s;

	b *= 1911520717;

	a ^= b << s | b >> w-s;

	a *= 2048419325;

	float random = a * (3.14159265 /  ~(~0u >> 1));

	Vector2 vector;
	
	vector.x = cos(random);
	vector.y = sin(random);

	return vector;
}

float dotGridGradient(int ix, int iy, float fx, float fy){
	Vector2 gradient = randomGradient(ix, iy);

	float dx = fx - (float)ix;
	float dy = fy - (float)iy;

	return (dx*gradient.x + dy*gradient.y);
}

int main(){
	FILE* map;
	map = fopen("map.txt", "w");
	
	for(int i = 0; i < 10000; i++){
		fputc('~', map);
	}

	fclose(map);
	//int rn = (rand() % (12 - 1 + 1)) + 1; formula from webto get random numbers in given range
	Vector2 tv = randomGradient(120, 8);
	printf("x = %f & y = %f \n", tv.x, tv.y);
	return 0;
}
