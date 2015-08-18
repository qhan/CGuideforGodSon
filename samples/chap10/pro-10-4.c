#include <stdio.h>

int main(void)
{
  printf("Current line_num is %d\n", __LINE__);
#line 100
  printf("Now redefine __LINE__ as %d\n", __LINE__);
  printf("Current line_num is %d\n", __LINE__);

  return 0;
}
