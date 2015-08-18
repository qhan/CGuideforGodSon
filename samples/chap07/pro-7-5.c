#include <stdio.h>

int main(void)
{
  int t,i,j;
  char strarry[30][80];

  printf("Please enter your words, end with an "
	 "enpty line.:\n");

  for (t = 0; t < 30; t++)
    {
      printf("%d:", t);
      gets(strarry[t]);
      if (!*strarry[t])
	break;
    }
  for (i = 0; i < t; i++)
    {
      //      for (j = 0; strarry[i][j]; j++)
      //	putchar(strarry[i][j]);
      printf("%s", strarry[i]);
      putchar('\n');
    }

  return 0;
}
