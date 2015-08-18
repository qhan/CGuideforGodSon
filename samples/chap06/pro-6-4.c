#include <stdio.h>

char * find_char(char c, char *s);

int main(void)
{
  char *p, ch;
  char s[40] = "abcdefghijklmnopqrstuvwxyz";
  
  printf("Please input a char:\n");
  ch = getchar();
  printf("%s\n", s);
  p = find_char(ch, s);
  printf("%s\n", s);

  if (*p)
    printf("%s\n", p);
  else
    printf("No match found.\n");

  return 0;
}

char * find_char(char c, char *s)
{
  while (c != *s && *s) s++;
  return s;
}
