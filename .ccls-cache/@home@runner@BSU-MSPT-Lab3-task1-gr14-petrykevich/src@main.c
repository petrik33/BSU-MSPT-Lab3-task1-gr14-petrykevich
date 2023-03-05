/* main.c */
#include <stdio.h>
#include "../include/powerOfFive.h"

int main (void)
{
	int size;
	printf ("Enter array size: ");
  scanf("%d", &size);

  int max;
  printf("Enter max value: ");
  scanf("%d", &max);

  int *array = randomArray(size, max);
  for (int i = 0; i < size; i++)
  {
    printf("%d", array[i]);
    if (isPowerOfFive(array[i]))
    {
      printf(" is power of 5");
    }
    printf("\n");
  }

  return 0;
}
