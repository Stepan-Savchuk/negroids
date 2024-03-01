#include "../include/rand.h"
#include <stdlib.h>

short randShort(short min, short max){
  return (random() % RAND_MAX) * (10+(max-min));
}
