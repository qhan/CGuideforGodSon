#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp;
  char str[80], strr[80];
  int x, xr;

  if ((fp = fopen("mytest", "w")) == NULL)
    {
      printf("Cannot open file.\n");
    }
  printf("Enter a string and a number: \n");
  fscanf(stdin, "%s %d", str, &x);
  fprintf(fp, "%s %d", str, x);
  fclose(fp);

  if ((fp = fopen("mytest", "r")) == NULL)
    {
      printf("Cannot open file.\n");
    }
  fscanf(fp, "%s %d", strr, &xr);
  fprintf(stdout, "%s %d\n", strr, xr);

  return 0;
}
