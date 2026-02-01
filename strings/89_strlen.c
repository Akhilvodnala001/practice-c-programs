#include <stdio.h>
#include <string.h>

int length(char *str)
{
  int i = 0;
  while (*str != '\0')
  {
    i++;
    str++;
  }
  return i;
}

int main()
{
  char str[100];
  printf("Enter string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  
  printf("Length of string is %d",length(str));
}
