#include <stdio.h>

void main() {
  int a = 1;
  int b = 2;
  printf("%p\n", &a);
  printf("%p\n", &a+1);
  // int형의 경우 4씩 주소 증가
  printf("%p\n", &b);
  printf("%p\n", &b+1);
}