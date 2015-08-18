#include <stdio.h>

int my_max(int x, int y);

int main(void)
{
  int a, b, m;

  printf("Please input two numbers:\n");
  scanf("%d %d", &a, &b);
  m = my_max(a,b);
  printf("The greater number is %d\n", m);
  
  return 0;
}

int my_max(int x, int y)
{
  return (x > y ? x:y);
}
