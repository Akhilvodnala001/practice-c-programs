#include <stdio.h>
#include <string.h>
int compare(char [],char []);
int main()
{
  char str1[30];
  printf("Enter the string-1: ");
  fgets(str1,sizeof(str1),stdin);
  str1[strcspn(str1,"\n")]='\0';

  char str2[30];
  printf("Enter the string-2: ");
  fgets(str2,sizeof(str2),stdin);
  str2[strcspn(str2,"\n")]='\0';
  int result;
  result = compare(str1,str2);
  if (result == 1)
  {
    printf("same!");
  }
  else
  {
    printf("Not same!");
  }
}

int compare(char str1[],char str2[])
{
  int len1 = strlen(str1);
  int len2 = strlen(str2);
  if (len1 != len2)
  {
    return 0;
  }
  else
  {
    int i,flag = 1;
    for (i=0;i<len1;i++)
    {
      if (str1[i] != str2[i])
      {
        flag = 0;
        break;
      }
    }
    if (flag == 1)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }


}
