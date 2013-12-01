#include <stdlib.h>
#include <stdio.h>


int swap(int *a, int *b) {
  int temp;
  temp = *a; //putting the value from *a pointer into temp
  //printf("%I\n", temp);
  *a = *b;
  *b = temp;
}


int main(){
  int array_length=1000;
  int *squares = malloc (array_length * sizeof(int));
    for (int i=0; i < array_length; i++)
          squares[i] = i * i;
    printf("Before swap: %i \n", squares[7]);
    swap(&squares[7], &squares[8]);
    printf("After swap: %i \n", squares[7]);
    return 0;
}
