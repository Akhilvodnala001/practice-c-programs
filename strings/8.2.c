#include <stdio.h>
#include <string.h>
int main()
{
char str1[30];
char str2[30];
printf("Enter your string: ");
fgets(str2,sizeof(str2),stdin);
strcat(str1,str2);
printf("The copied string is %s",str1);
}
