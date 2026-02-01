#include <stdio.h>
#include <string.h>
char *concat(char *str1,char *str2)
{
  char *start = str1;
  while (*str1!='\0')
  {
    *str1++;
  }
  while (*str2!='\0')
  {
    *str1 = *str2;
    *str1++;
    *str2++;
  }
  *str1 = '\0';
  return start;
}
int main()
{
  char str1[100];
  printf("Enter string-1: ");
  fgets(str1,sizeof(str1),stdin);
  str1[strcspn(str1,"\n")]='\0';
  
  char str2[100];
  printf("Enter string-2: ");
  fgets(str2,sizeof(str2),stdin);
  str2[strcspn(str2,"\n")]='\0';
  printf("The copied string is %s",concat(str1,str2));
}
