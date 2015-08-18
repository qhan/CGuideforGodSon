#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  FILE *fpr;
  char ch[80];

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
  puts("Plese input something:");
  while (fgets(ch, 80, stdin) != NULL && ch[0] != '\n')
    fputs(ch, fp);
  fclose(fp);

  if ((fpr = fopen(argv[1], "r")) == NULL)
    {
      printf("Cannot open file. \n");
      exit(2);
    }
  puts("You've inputed:");
  while (fgets(ch, 80, fpr) != NULL && ch[0] != '\n')
    fputs(ch, stdout);
  fclose(fpr);
  
  return 0;
}
