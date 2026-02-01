#include <stdio.h>
#include <string.h>
#include <ctype.h>
int same(char [],char []);
int main()
{
  char str1[100];
  printf("Enter the string-1: ");
  fgets(str1,sizeof(str1),stdin);
  str1[strcspn(str1,"\n")]='\0';
  
  char str2[100];
  printf("Enter string-2: ");
  fgets(str2,sizeof(str2),stdin);
  str2[strcspn(str2,"\n")]='\0';
  
  int result;
  result = same(str1,str2);
  if (result == 0)
  {
    printf("Same!");
  }
  else
  {
    printf("Not Same!");
  }
}

int same(char str1[],char str2[])
{
  int i;
  if (strlen(str1) != strlen(str2))
  {
    return 1;
  }
  else
  {
    for (i=0;str1[i]!='\0';i++)
    {
      if (tolower(str1[i]) != tolower(str2[i]))
      {
        return 1;
      } 
    }
    return 0;
  }
}
