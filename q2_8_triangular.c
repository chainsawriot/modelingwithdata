#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int triangular(int i) {
  int total = 0;
  int j;
  for(j = 0; j <= i; j++) {
    total = total + j;
  }
  return total;
}

int find_next_triangular(int in) {
  int cur = 1;
  int cur_triangular = 0;
  while (1) {
    cur_triangular = triangular(cur);
    // printf("Cur: %i, Cur_tri: %i \n", cur, cur_triangular);
    if (cur_triangular > in) {
      return cur;
    }
    cur ++;
  }
}

void find_triplet(int in) {
  //int out[3];
  int try1, try2, try3, t1remainder, t2remainder, t3remainder;
  for (try1 = 1; try1 < find_next_triangular(in); try1++) {
    t1remainder = in - triangular(try1);
    //printf("t1remainder: %i", t1remainder);
    if (t1remainder == 0) {
      printf("%i = %i\n", in, triangular(try1));
      return;
    } else {
      for (try2 = 1; try2 < find_next_triangular(t1remainder); try2++) {
	t2remainder = t1remainder - triangular(try2);
	if (t2remainder == 0) {
	  printf("%i = %i + %i\n", in, triangular(try1), triangular(try2));
	  return;
	} else {
	  for (try3 = 1; try3 < find_next_triangular(t2remainder); try3++) {
	    t3remainder = t2remainder - triangular(try3);
	    if (t3remainder == 0) {
	      printf("%i =  %i + %i + %i \n", in, triangular(try1), triangular(try2), triangular(try3));
	      return;
	    }
	  }
	}
      }
    }
  }
}

//int main(int argc, char **argv) {
//  int test = atoi(argv[1]);
//  find_triplet(test);
  //printf("%i %i \n", test, tritest[0], tritest[1]);
//  return 0;
//}

int main() {
  int i;
  for (i = 1; i <=100; i ++) {
    find_triplet(i);
  }
  return 0;
}
