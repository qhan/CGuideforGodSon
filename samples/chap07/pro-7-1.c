#include <stdio.h>

int main(void)
{
  int array[80];
  int i;

  for (i = 0; i < 80; i++)
    array[i] = i + 1;
  for (i = 0; i < 80; i++)
    printf("%d ", array[i]);
  putchar('\n');
  
  return 0;  
}
