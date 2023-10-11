#include <stdio.h>

void KU_add(int*, int**);

int main() {
  int *a, *b, **c;
  int x=2, y=3;
  a = &y; b = &x; c = &b;
  printf("x: %d, y: %d\n", x, y);
  KU_add(a, c);
  printf("x+y= %d", x);
  return 0;
}

void KU_add(int *m, int **n) {
  int t;
  **n = *m + **n;
}