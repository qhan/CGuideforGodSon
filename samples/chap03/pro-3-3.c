#include <stdio.h>

int main(void)
{
  int cnt1, cnt2;

  printf("This is%n a testing %nprogram.\n", &cnt1, &cnt2);
  printf("Counter1 = %d, Counter2 = %d \n", cnt1, cnt2);

  double x = 15.3245;
  
  printf("%f;", x);
  printf("%12f;", x);
  printf("%012f;\n", x);
  
  return 0;
}
