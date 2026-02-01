#include <stdio.h>
#include <string.h>
int main()
{
char str1[30];
char str2[30];
printf("Enter the first string: ");
fgets(str1,sizeof(str1),stdin);
printf("Enter the second string: ");
fgets(str2,sizeof(str2),stdin);
str1[strcspn(str1,"\n")] = '\0';
str2[strcspn(str2,"\n")] = '\0';
int i,j,len1,len2;
len1 = strlen(str1);
len2 = strlen(str2);
for (i=0;i<=len2;i++)
{
  str1[len1+i] = str2[i];  
}
printf("%s",str1);
}
