#include <stdio.h>
#include <string.h>
int main()
{
  char name[30];
  int i,len;
  printf("Enter a string: ");
  fgets(name,sizeof(name),stdin);
  len = strlen(name);
  printf("Individual characters of the string in reverse order: ");
  for (i=len-1;i>=0;i--)
  {
    printf("%c ",name[i]);
  }
}
