#include "../include/rand.h"

//TODO : Test dis shit

short randShort(short min, short max){
  srandom(time(NULL));
  double fraction = 1.0 / ((double) RAND_MAX + 1.0);

  return (short) (random() * fraction * (max - min + 1) + min);
}
