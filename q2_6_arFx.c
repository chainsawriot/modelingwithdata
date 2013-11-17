#include <math.h>
#include <stdio.h>

void print_array(int in_array[], int array_size) {
  int i;
  for (i = 1; i <= array_size; i ++) {
    printf("%i %i\n", i, in_array[i-1]);
  }
}

int main() {
  int the_array[100];
  int i;
  for (i = 1; i <= 100; i ++) {
    the_array[i-1] = i * i;
  }
  print_array(the_array, 100);
  return 0;
}
