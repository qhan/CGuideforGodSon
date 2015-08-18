#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc < 2){
    printf("Usage:\n    $PRO YOURNAME YOURGENDER\n"
	   "    M/m for male, F/f for female.\n");
    exit(1);
  }
  if ('M' == argv[2][0] || 'm' == argv[2][0])
    printf("Welcome, Mr. %s!\n", argv[1]);
  else if (('F' == argv[2][0] || 'f' == argv[2][0]))
    printf("Welcome, Ms. %s!\n", argv[1]);
  else
    printf("Sorry, maybe you've input the wrong "
	   "information.\n");
  
  return 0;
}
