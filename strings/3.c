#include <stdio.h>
int main()
{
char name[30];
int i;
printf("Enter your name: ");
fgets(name,sizeof(name),stdin);
printf("The characters in given string are excluding null and newline characters are ");
for (i=0;name[i]!='\0'&&name[i]!='\n';i++)
{
  printf("%c ",name[i]);
}
}
