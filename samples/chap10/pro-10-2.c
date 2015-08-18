#include <stdio.h>

#define MAX 99

int main(void)
{
#if MAX > 99
  printf("Compile statement 1\n");
#elif MAX < 99
  printf("Compile statement 2\n");
#else
  printf("Compile statement 3\n");
#endif
  
  return 0;
}
