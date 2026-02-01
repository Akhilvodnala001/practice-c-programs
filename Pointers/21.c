#include <stdio.h>
#include <string.h>
int fun(char *ptr)
{
  int len = 0;
  while ((*ptr)!='\0')
  {
    len++;
    ptr++;
  }
  return len;
}
int main()
{
  char str[100];
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  int n;
  n = fun(str);
  printf("Length of the string is %d",n);
}
