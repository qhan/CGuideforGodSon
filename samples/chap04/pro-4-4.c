#include <stdio.h>
#include <string.h>

int main(void)
{
  int i, j;
  char str1[80]="XXXXXXXX XXXXXXXXXXXXXXXXX";
  char str2[80]="This is a testing program.";

  printf("%s \n", str1);
  for (i=0, j=strlen(str2); i<=j; i++, j--)
    {
      str1[i]=str2[i];
      str1[j]=str2[j];
      printf("%s \n", str1);
    }

  return 0;
}
