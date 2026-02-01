#include <stdio.h>
#include <string.h>
int main()
{
  char str1[10];
  char str2[10];
  printf("Enter string-1: ");
  fgets(str1,sizeof(str1),stdin);
  str1[strcspn(str1,"\n")] = '\0';
  
  printf("Enter string-2: ");
  fgets(str2,sizeof(str2),stdin);
  str2[strcspn(str2,"\n")] = '\0';
  if (strlen(str1)!=strlen(str2))
  {
    printf("Not anagram!");
    return 0;
  }
  int i,j;
  int flag;
  for (i=0;i<strlen(str1);i++)
  {
    flag = 0;
    for (j=0;j<strlen(str2);j++)
    {
      if (str1[i] == str2[j])
      {
        flag = 1;
      }
    }
    if (flag != 1)
    {
      printf("Not anagram!!");
      return 0;
    }
  }
  printf("Anagram!");
  

}
