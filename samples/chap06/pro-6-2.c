#include <stdio.h>

int my_max(int *x, int *y);

int main(void)
{
  int a, b, m;

  printf("Please input two numbers:\n");
  scanf("%d %d", &a, &b);
  printf("a = %d, b = %d.\n", a, b);
  m = my_max(&a, &b);
  printf("The greater number is %d\n", m);
  printf("a = %d, b = %d.\n", a, b);
  
  return 0;
}

int my_max(int *x, int *y)
{
  *x = *x > *y ? *x:*y;
  *y = 0;
  return *x;
}
