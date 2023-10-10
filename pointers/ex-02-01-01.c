#include <stdio.h>

void main() {
  char c = 'A';
  char *cp = &c;
  int n = 10;
  int *np = &n;
  printf("%c %c\n", c, *cp);
  printf("%ld %ld\n", sizeof(char), sizeof(char*));
  printf("%ld %ld\n", sizeof(c), sizeof(cp));
  printf("====\n");
  printf("%d %d\n", n, *np);
  printf("%ld %ld\n", sizeof(int), sizeof(int*));
  printf("%ld %ld\n", sizeof(n), sizeof(np));
}

// 포인터의 용량은 8바이트