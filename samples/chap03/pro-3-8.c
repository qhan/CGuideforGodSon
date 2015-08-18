#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[80];

  gets(str);
  puts(str);
  printf("The length of input string is: %d\n", 
	 strlen(str));
  
  return 0;
}
