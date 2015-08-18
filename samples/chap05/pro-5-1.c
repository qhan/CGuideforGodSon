#include <stdio.h>

int main(void)
{
  int i;
  char *ch="This is a testing program for gdb.";

  i=0;
  while (ch[i] != '\0')
    {
      putchar(ch[i]);
      i++;
    }
  ch[i]='!';
  putchar('\n');
  for (i=1; i<=11; i++)
    printf("%X", i);
  putchar('\n');
  for (i=1; i<=11; i++)
    {
      if (i%3 == 0)
	putchar('$');
      else 
	putchar('*');
    }
  putchar('\n');

  return 0;  
}
