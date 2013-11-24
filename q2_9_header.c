#include <stdio.h>
#include "utility_fns.h"

int main() {
  int the_array[100];
  int i;
  for (i = 1; i <= 100; i ++) {
    the_array[i-1] = i * i;
  }
  print_array(the_array, 100);
  return 0;
}
