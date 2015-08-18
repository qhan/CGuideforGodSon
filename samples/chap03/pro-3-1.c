#include <stdio.h>
#include <string.h>

int main(void)
{
  char name[30];
  int age;
  float weight;
  int size;
  
  printf("Hello! Welcome to world of loongson!\n");
  printf("Please answer the following questions:\n");
  printf("What's your first name? \n");
  scanf("%s", name);
  printf("How old are you, %s?\n", name);
  scanf("%d", &age);
  printf("Tell me your weight in kg?\n");
  scanf("%f", &weight);
  printf("My friend %s, you are %d years old,\n", 
	 name, age); 
  printf(" with the weight of %2.3f \
kg.\n", weight);
  size = strlen(name)*sizeof(char);
  size += sizeof age;
  size += sizeof weight;
  printf("We need %d bytes to store your "
	 "information.\n", size);
  
  return 0;
}
