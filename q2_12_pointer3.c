#include <stdio.h>  //printf
#include <stdlib.h> //malloc

int globe=1;          //a global variable.

int factorial (int *a_c){
    while (*a_c){
        globe   *= *a_c;
        (*a_c) --;
    }
     return globe;
}

int main(void){
  //int *a = malloc(sizeof(int)); // generate an integer pointer
  int a;
  a = 10; // put the value 10 into the memory location
  printf("%i factorial ...", a); //deref a into 10
  printf(" is %i.\n", factorial(&a)); //passing a as a pointer to factorial function
  //printf("*a= %i\n", a); //a changed in the factorial function and remain zero
  printf("globe= %i\n", globe);
  //free(a);
  return 0;
}
