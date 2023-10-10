#include <stdio.h>

void main() {
  char c = 'A';
  printf("%p %p %p\n", &c, (char *)&c, (int *)&c);
  printf("%p %p %p\n", &c + 1, (char *)&c + 1, (int *)&c + 1);
  // &c를 int형 포인터로 형변환 -> int형 포인터에 1을 더하면 주소값은 4 증가함
}