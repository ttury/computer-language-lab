#include <stdio.h>

void main() {
  int n = 10;
  int *np = &n;
  int **npp = &np;
  int ***nppp = &npp;
  printf("%d %d %d %d\n", n, *np, **npp, ***nppp);
  printf("%ld %ld %ld %ld\n", sizeof(int), sizeof(int*), sizeof(int**), sizeof(int***));
  printf("%ld %ld %ld %ld\n", sizeof(n), sizeof(np), sizeof(npp), sizeof(nppp));
}

// 모든 포인터는 용량 동일
