#include <stdio.h>
int str_len(char *str)
{
  int len = 0;
  while ((*str)!='\0')
  {
    len++;
    str++;
  }
  return len;
}
int main()
{
  char str[100];
  printf("Enter the string: ");
  scanf("%s",str);
  
  int len;
  len = str_len(str);
  printf("Length of string is %d",len);
}
