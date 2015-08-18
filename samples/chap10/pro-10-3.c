#include <stdio.h>

#define DAYS 30

int main(void)
{
#ifdef DAYS
  printf("DAYS is %d.\n", DAYS);
#else
  printf("Don't how much days.\n");
#endif

#ifndef MONTHS
#define MONTHS 12
  printf("MONTHS should be 12.\n");
#endif
  
  return 0;
}
