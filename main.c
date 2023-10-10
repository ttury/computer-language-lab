#include <stdio.h>

int KU_add(int, int);

int main() {
  int a = 10;
  int b = 20;
  int c = KU_add(a, b);
  printf("%d + %d = %d\n", a, b, c);
  return 0;
}

int KU_add(int a, int b) {
  return a+b;
}