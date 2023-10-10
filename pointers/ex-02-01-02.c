#include <stdio.h>

void main() {
  char c = 'A';
  char *cp = &c;
  *cp = 'B';
  printf("%c %c\n", c, *cp);
  printf("=====\n");
  int n = 10;
  int *np = &n;
  *np = 20;
  printf("%d %d\n", n, *np);
}