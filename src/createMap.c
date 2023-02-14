#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float interpolate(float min, float max, float w){
	if(0.0 > w) return min;
	if(1.0 < w) return max;

//	interpolation funxtions which i took from wikipedia
//	i use third one because it is said that it gives smoother step
	//return (max - min) * w + min;

	//return (max - min) * (3.0 - w * 2.0) * w*w + min;

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

	b ^= a << s | a >> (w-s);

	b *= 1911520717;

	a ^= b << s | b >> (w-s);

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

float perlin(float x, float y){
	int x0 = floor(x);
	int x1 = x0 + 1;

	int y0 = floor(y);
	int y1 = y0 + 1;
	
	float tx = (float) x0;
	float ty = (float) y0;

	float sx = x - tx;
	float sy = y - ty;

	if(sx == 0.0 && sy == 0.0) {
		sx += 1 / x;
		sy += 1 / y;
	}

	float n0, n1, ix0, ix1, value;

	n0 = dotGridGradient(x0, y0, x, y);
	n1 = dotGridGradient(x1, y0, x, y);
	ix0 = interpolate(n0, n1, sx);

	n0 = dotGridGradient(x0, y1, x, y);
	n1 = dotGridGradient(x1, y1, x, y);
	ix1 = interpolate(n0, n1, sx);

	value = interpolate(ix0, ix1, sy);

	return value;
}

typedef struct Sector {
	uint8_t x0;
	uint8_t y0;
	uint8_t x1;
	uint8_t y1;
} Sector;

void generateMap(){
	FILE* map;
        map = fopen("map.txt", "w");
	
	int y = 35;
	int x = 64;

	//int direction = (rand() % (4 - 1 + 1)) + 1;

        /*for(int x = 0, y = 0; y < 35; x++){
		if(x <= 8){
			fputc('~', map);
			continue;
		}

        }*/

	/*for(int i = 0, j = 0; j < y; i++){
		if(i > x){
                        fputc('\n', map);
                        j++;
                        i = 0;
                }
		if(i == tx || j == ty){
			fputc('*', map);
			continue;
		}

		fputc(' ', map);
	}*/

        fclose(map);
}

int main(){
	generateMap();
	//int rn = (rand() % (12 - 1 + 1)) + 1; formula from webto get random numbers in given range
	return 0;
}
