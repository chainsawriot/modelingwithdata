#include <math.h>
#include <stdio.h>

int main() {
  int the_array[100];
  int i;
  for (i = 1; i <= 100; i ++) {
    the_array[i-1] = i * i;
  }
  for (i = 1; i <= 100; i ++) {
    printf("%i squared is %i\n", i, the_array[i-1]);
  }
  return 0;
}
