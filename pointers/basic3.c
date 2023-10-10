#include <stdio.h>

int main() {
  int x, y, sum;
  x = 100;
  y = 200;
  int *ptr_x, *ptr_y, *ptr_sum;
  ptr_x = &x;
  ptr_y = &y;
  ptr_sum = &sum;
  *ptr_sum = *ptr_x + *ptr_y;
  printf("ptr_x : %p, ptr_y : %p\n", ptr_x, ptr_y);
  printf("*ptr_x : %d, *ptr_y : %d\n", *ptr_x, *ptr_y);
  printf("*ptr_sum : %d\n", *ptr_sum);
  return 0;
}