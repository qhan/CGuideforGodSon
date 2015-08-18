#include <stdio.h>

int main(void)
{
  struct mystr{
    int x;
    int y;
  } st1, st2;
  
  st1.x = 10;
  st1.y = 20;
  st2 = st1;
  printf("st1's members is: x=%d, y=%d\n",
	 st1.x, st1.y);
  printf("st2's members is: x=%d, y=%d\n",
	 st2.x, st2.y);

  return 0;
}
