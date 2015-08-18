#include <stdio.h>

int main(void)
{
  int x = 10;
  int *p1, *p2;

  p1 = &x;
  p2 = p1;
  
  printf("Values at p1 and p2 is %d, %d\n", *p1, *p2);
  printf("Addresses pointed by p1 and p2 is "
	 "%p %p\n", p1, p2);

  return 0;
}
