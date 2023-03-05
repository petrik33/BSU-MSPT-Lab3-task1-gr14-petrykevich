/* main.c */
#include <stdio.h>
#include "../include/powerOfFive.h"

int main (void)
{
	int size;
	printf ("Enter array size: ");
  scanf('%d', &size);

  int* array = randomArray(size);
  for(int i = 0; i < size; i++) {
    printf('%d', array[i]);
  }
  
  return 0;
}
