#include <stdio.h>

void disparray(char *array[]);

int main(void)
{
  char *x[] = {
    "Hello world!",
    "This is a C program.",
    "I love C!",
    "I love Godson!",
    "I love linux!"
  };

  disparray(x);

  return 0;
}

void disparray(char *array[])
{
  int i, j;

  i = 0;
  while (*array[i])
    {
      printf("%s \n", array[i]);
      j = 0;
      while (array[i][j])
	{
	  printf("%c* ", array[i][j]);
	  j++;
	}
      putchar('\n');
      i++;
    }
}
