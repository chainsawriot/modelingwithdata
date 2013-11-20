#include <stdio.h>
double global=1;
double factorial (int a_c) {
  while (a_c) {
    global *= a_c;
    a_c --;
  }
  return global;
}

int main(void) {
  int a = 10;
  printf("%i factorial is %f.\n", a , factorial(a));
  printf("a=%i\n", a);
  printf("global=%f\n", global); //global variable can be changed in every frame
  return 0;
}
