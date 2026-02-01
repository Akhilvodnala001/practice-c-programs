#include <stdio.h>
#include <string.h>
int compare(char [],char []);
int main()
{
  char str1[100];
  char str2[100];
  printf("Enter the string-1: ");
  fgets(str1,sizeof(str1),stdin);
  str1[strcspn(str1,"\n")]='\0';
  
  printf("Enter the string-2: ");
  fgets(str2,sizeof(str2),stdin);
  str2[strcspn(str2,"\n")]='\0';
  
  int result;
  
  result = compare(str1,str2);
  
  if (result == 1)
  {
    printf(" same! ");
  }
  else
  {
    printf(" Not same! ");
  }
}
int compare(char str1[],char str2[])
{
int i;
if (strlen(str1) == strlen(str2))
{
  for (i=0;str1[i]!='\0';i++)
  {
    if (!((str1[i]>=65 && str1[i]<=90)||(str2[i]>=97 && str2[i]<=122)))
    {
      if (str1[i] != str2[i])
      {
        return 0;
      }
    }
    else
    {
      if (!((str1[i]==str2[i])||(str1[i]==(str2[i]-32))||((str1[i]-32)==str2[i])))
      {
        return 0;
      }
    
    }
  }
  return 1;
}
else
{
  return 0;
}
}
