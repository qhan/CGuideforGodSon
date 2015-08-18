#include <stdio.h>

int main(void)
{
  printf(".........................\n");
  printf("right justified: %8d\n", 123);
  printf(".........................\n");
  printf(" left justified: %-8d\n", 123);
  printf(".........................\n");

  return 0;
}

