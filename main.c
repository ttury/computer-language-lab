#include <stdio.h>

int KU_add(a, b) {
  return a+b;
}

int main() {
  int a = 10;
  int b = 20;
  int c = KU_add(a, b);
  printf("%d + %d = %d\n", a, b, c);
  return 0;
}