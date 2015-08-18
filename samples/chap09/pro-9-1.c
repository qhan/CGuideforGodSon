#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  FILE *fpr;
  char ch;

  if (argc != 2)
    {
      printf("Please input a filename.\n");
      exit(1);
    }
  if ((fp = fopen(argv[1], "w")) == NULL)
    {
      printf("Cannot open file. \n");
      exit(1);
    }
  puts("Plese input something, end with #:");
  do {
    ch = getchar();
    putc(ch, fp);
  } while(ch != '#');
  fclose(fp);

  if ((fpr = fopen(argv[1], "r")) == NULL)
    {
      printf("Cannot open file. \n");
      exit(2);
    }
  puts("You've inputed:");
  do {
    ch = getc(fpr);
    putchar(ch);
  } while(ch != '#');
  fclose(fpr);
   
  return 0;
}
