#include <stdio.h>
#include <string.h>
int str_start(char [],char []);
int str_end(char [],char []);
int main()
{
  char str1[100];
  printf("Enter the string-1: ");
  fgets(str1,sizeof(str1),stdin);
  str1[strcspn(str1,"\n")]='\0';
  
  char str2[100];
  printf("Enter the string-2: ");
  fgets(str2,sizeof(str2),stdin);
  str2[strcspn(str2,"\n")]='\0';
  int fun1 = str_start(str1,str2);
  int fun2 = str_end(str1,str2);
  if (fun1 == 1)
  {
    printf("str2 is present at the start of the str1...\n");
  }
  else
  {
    printf("str2 is not present at the start of the str1...\n");
  }
  
  if (fun2==1)
  {
    printf("str2 is present at the end of the str1...");
  }
  else
  {
    printf("str2 is not present at the end of the str1...");
  } 
}

int str_start(char str1[],char str2[])
{
  int len1,len2,i,j;
  char copy1[100];
  char copy2[100];
  len1 = strlen(str1);
  len2 = strlen(str2);
  if (len1<len2)
  {
    return 0;
  }
  for (i=0;i<len2;i++)
  {
    if (str1[i] != str2[i])
    {
      return 0;
    }
  }
  return 1;
}

int str_end(char str1[],char str2[])
{
  int len1,len2,i,j;
  int k = 0;
  len1 = strlen(str1);
  len2 = strlen(str2);
  if (len1<len2)
  {
    return 0;
  }
  for (i=len1-len2;str1[i]!='\0';i++)
  {
    if (str1[i] != str2[k])
    {
      return 0;
    }
    k++;
  }
  return 1;
}

