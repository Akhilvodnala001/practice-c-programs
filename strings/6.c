#include <stdio.h>
#include <string.h>
int main()
{
char str1[30];
char str2[30];
int i,len1,len2;
printf("Enter string 1: ");
fgets(str1,sizeof(str1),stdin);
printf("Enter string 2: ");
fgets(str2,sizeof(str2),stdin);
len1 = strlen(str1);
len2 = strlen(str2);
int same = 1;
if (len1 == len2)
{
  for (i=0;i<len1-1;i++)
  {
    if (str1[i] != str2[i])
    {
      same = 0;
      break;
    }
  }
}
else
{
  same = 0;
}
if (same == 1)
{
  printf("Strings are same...");
}
else
{
  printf("String are not same...");
}
}
