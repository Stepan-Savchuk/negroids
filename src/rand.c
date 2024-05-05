#include "../include/rand.h"
#include <stdlib.h>

//TODO : Test dis shit

short randShort(short min, short max){
  return (random() % RAND_MAX) * (10+(max-min));
}
