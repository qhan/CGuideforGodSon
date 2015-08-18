#include <stdio.h>

int main(void)
{
  int n;

  printf("Please input 3 numbers:\n");
  scanf("%*d %*d %d", &n);
  printf("The last number is: %d\n", n);

  return 0;
}
