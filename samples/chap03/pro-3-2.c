#include <stdio.h>

int main(void)
{
  double f;
  
  for (f=10.0; f<1.0e+9; f=f*10)
    printf(" %g;", f);
  printf("\n"); 

  return 0;
}
