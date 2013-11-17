#include <math.h>
#include <stdio.h>

int main() {
  float fib[20];
  int i;
  for (i=1; i <= 20; i++) {
    if (i == 1) {
      fib[i-1] = 0;
    } else if (i == 2) {
      fib[i-1] = 1;
    } else {
      fib[i-1] = fib[i-3] + fib[i-2];
    }
  }
  for (i = 2; i <= 20; i++) {
    printf("%i \t %f \n", i, fib[i-1] / fib[i-2]);
  }
  return 0;
}
