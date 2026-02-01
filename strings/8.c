#include <stdio.h>
#include <string.h>
int main()
{
char str1[30];
char str2[30];
printf("Enter string: ");
fgets(str2,sizeof(str2),stdin);
int i,len;
len = strlen(str2);
for (i=0;i<len;i++)
{
  str1[i] = str2[i];
}
printf("The copied string is %s",str1);
}
