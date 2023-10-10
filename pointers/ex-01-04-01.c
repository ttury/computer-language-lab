#include <stdio.h>

void main() {
  char c = 'A';
  printf("%p\n", &c);
  printf("%c %c\n", c, *&c);
}