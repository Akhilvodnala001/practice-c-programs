#include <stdio.h>
#include <string.h>
int main()
{
char str1[30];
printf("Enter the string-1: ");
fgets(str1,sizeof(str1),stdin);
str1[strcspn(str1,"\n")]='\0';
int len1 = strlen(str1);
char str2[30];
printf("Enter the string-2: ");
fgets(str2,sizeof(str2),stdin);
str2[strcspn(str2,"\n")]='\0';
int len2 = strlen(str2);
int i;
for (i=0;str2[i]!='\0';i++)
{
  str1[len1+i] = str2[i];
}
printf("The concatenated string is %s",str1);

}
