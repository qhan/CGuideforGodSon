#include <stdio.h>

struct struct_type{
  int x, y;
  char name[10];
};

void subfunc(struct struct_type param);

int main(void)
{
  struct struct_type str;

  str.x = 5;
  str.name[0] = 'T';
  str.name[1] = 'o';
  str.name[2] = 'm';
  str.name[3] = '\0';
  subfunc(str);
  
  return 0;  
}

void subfunc(struct struct_type param)
{
  printf("The name is %s.\n", param.name);
}
