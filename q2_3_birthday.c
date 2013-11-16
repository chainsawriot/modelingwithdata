#include <math.h>
#include <stdio.h>

int main() {
  double no_match = 1;
  double matches_me;
  int ct;
  printf("People\t Matches \t Any match\n");
  for (ct = 1; ct <= 40; ct ++) {
    if (ct != 1) {
      matches_me = 1 - pow(364/365., ct - 1);
      no_match *= (1-(ct-1)/365.);
    } else {
      matches_me = 0;
      no_match = 1;
    }
    printf("%i\t %.3f\t\t %.3f\n", ct, matches_me, (1-no_match));
  }
  return 0;
}
