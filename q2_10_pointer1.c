#include <stdio.h>  //printf
#include <stdlib.h> //malloc

int swap(int *a, int *b) {
  int temp;
  temp = *a; //putting the value from *a pointer into temp
  //printf("%I\n", temp);
  *a = *b;
  *b = temp;
}

int main(void){
  int firstnum = 20;
  int secondnum = 30;
  swap(&firstnum, &secondnum);
  printf("%i\n", firstnum);
  printf("%i\n", secondnum);
}
