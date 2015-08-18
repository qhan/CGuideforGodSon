#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp;
  int a = 100, ar;
  long b = 1234500L, br;
  double x = 3.1415, xr;
  
  if ((fp = fopen("mytest", "wb+")) == NULL)
    {
      printf("Cannot open file.\n");
      exit(1);
    }
  fwrite(&a, sizeof(int), 1, fp);
  fwrite(&b, sizeof(long), 1, fp);
  fwrite(&x, sizeof(double), 1, fp);
  rewind(fp);
  fread(&ar, sizeof(int), 1, fp);
  fread(&br, sizeof(long), 1, fp);
  fread(&xr, sizeof(double), 1, fp);
  printf("%d, %ld, %f\n", ar, br, xr);
  fclose(fp);
  
  return 0;  
}
