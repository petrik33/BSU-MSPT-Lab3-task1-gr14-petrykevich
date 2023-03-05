#include "../include/powerOfFive.h"

int isPowerOfFive(int x) {
  do {
    if(x == 1) {
      return 1;
    }
    x /= 5;
  } while(x % 5 == 0 && x != 0);
  return 0;
}
