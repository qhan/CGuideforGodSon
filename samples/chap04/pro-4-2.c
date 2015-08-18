#include <stdio.h>

int main(void)
{
  char name[60];
  int gender;
  int selected;

  printf("Please tell me your name:\n");
  scanf("%s", name);
  printf("Well, %s, your gender please(0 for male, 1"
	 " for female):\n", name);
  scanf("%d", &gender);
  printf("You've input %d, and ...\n", gender);

  if (gender)
    {
      while (9 != selected)
	{
	  getchar();
	  printf("Please tell me your favorite, Madam?\n");
	  printf("1. Flower;\n2. Perfume;\n3. Diamond;\n4. Roadster.\n");
	  printf("Press 9 to exit \n\n");
	  scanf("%d", &selected);
	  printf("\n@@@ %d @@@\n",selected);
	  printf("You selected %d, ", selected);
	  switch (selected){
	  case 1:
	    printf("the flower!\n Flower is good gift!\n");
	    break;
	  case 2:
	    printf("the perfume!\n Perfume make you smell good!\n");
	    break;
	  case 3:
	    printf("the diamond!\n Diamond make you seems good!\n");
	    break;
	  case 4:
	    printf("the roadster!\n Roadster make you so cool!\n");
	    break;
	  case 9:
	    printf("Bye!\n");
	    break;
	  default:
	    printf("Maybe you inputed a wrong number, try again!\n");
	    break;
	  }
	}
    }
  else
    {
      printf("Please tell me your favorite, Sir?\n");
      printf("1. Cigar;\n2. Zippo;\n3. Gun;\n4. Apple iMac.\n");
      scanf("%d", &selected);
      printf("You selected %d, ", selected);
      switch (selected){
      case 1:
	printf("the cigar!\n Cigar will destroy your lung!\n");
	break;
      case 2:
	printf("the zippo!\n Zippo is wear well!\n");
	break;
      case 3:
	printf("the gun!\n Gun is dangerous!\n");
	break;
      case 4:
	printf("the iMac!\n iMac is designed by geniuses!\n");
	break;
      default:
	printf("Maybe you inputed a wrong number, try again!\n");
	break;
      }
    }

  return 0;
}
