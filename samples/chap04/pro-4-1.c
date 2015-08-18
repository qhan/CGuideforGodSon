#include <stdio.h>

int main(void)
{
  char name[60];
  int gender;

  printf("Please tell me your name:\n");
  scanf("%s", name);
  printf("Well, %s, your gender please(0 for male, 1"
	 " for female):\n", name);
  scanf("%d", &gender);
  printf("You've input %d, and ...\n", gender);

  return 0;
}
