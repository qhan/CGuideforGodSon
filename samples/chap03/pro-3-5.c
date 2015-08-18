#include <stdio.h>

int main(void)
{
  int i;
  char str1[40], str2[40];
  
  printf("Input something here:\n");
  scanf("%d%[abcdefg]%s", &i, str1, str2);
  printf("%d %s %s\n", i, str1, str2);
  
  return 0;
}
