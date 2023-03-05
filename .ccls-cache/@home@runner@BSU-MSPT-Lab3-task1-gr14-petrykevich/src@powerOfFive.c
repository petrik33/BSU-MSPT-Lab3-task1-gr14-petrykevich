#include "../include/powerOfFive.h"
#include <stdlib.h>
#include <time.h>

int isPowerOfFive(int x) {
  do {
    if(x == 1) {
      return 1;
    }
    x /= 5;
  } while(x % 5 == 0 && x != 0);
  return 0;
}

int seed = 0;
int* randomArray(int size) {
  if(seed == 0) {
    seed = time(NULL);
    srand(seed);
  }
  int* arrPtr = (int*)malloc(size * sizeof(int));
  for(int i = 0; i < size; i++) {
    arrPtr[i] = rand();
  }
  return arrPtr;
}
