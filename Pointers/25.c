#include <stdio.h>
void str_cpy(char copy[],char str[])
{
  char *cptr1 = str;
  char *cptr2 = copy;
  while (*cptr1 != '\0')
  {
    *cptr2 = *cptr1;
    cptr1++;
    cptr2++;
  }
  *cptr2 = '\0';

}

int main()
{
  char str[100];
  printf("Enter the string: ");
  scanf("%s",str);
  char copy[100];
  str_cpy(copy,str);
  printf("The copied string is %s",copy);
}
