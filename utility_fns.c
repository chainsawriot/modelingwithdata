#include <stdio.h>

void print_array(int in_array[], int array_size) {
  int i;
  for (i = 1; i <= array_size; i ++) {
    printf("%i %i\n", i, in_array[i-1]);
  }
}
