#include <stdio.h>
#include <string.h>
int main()
{
char str1[10];
char str2[10];
printf("Enter your name: ");
scanf("%s",&str1);
printf("Enter your surname: ");
scanf("%s",&str2);
strcat(str1,str2);
printf("%s",str1);

}
