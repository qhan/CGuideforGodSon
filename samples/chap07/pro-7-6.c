#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  const int num = 50;
  int *p;
  int i;

  p = malloc(num * sizeof(int));
  if (!p)
    {
      printf("Allocating error!\n");
      exit(1);
    }
  for (i = 0; i < num; i++)
    p[i] = i + 1;
  for (i = 0; i < num; i++)
    printf("%d ",p[i]);
  putchar('\n');

  free(p);
  return 0;
}
