#include <stdio.h>

int main()
{
  int a, a1;
  double b;
  char c;
  
  a = 10.4; a1= 'D'; b = 25; c = 68;
  printf("a=%d\n",a);
  a = a + c;
  b = a1 + c;
  printf("a=%d, b=%f .\n", a, b);
  
  return 0;
}
