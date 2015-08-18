#include <stdio.h>

int main(void)
{
  double x = 3.1415926, y;
  int *p;

  p = (int *)&x;
  y = *p;

  printf("x = %f, y = %f\n", x, y);

  return 0;
}
