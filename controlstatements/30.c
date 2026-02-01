#include <stdio.h>
int main()
{
char str[100];
printf("Enter the string: ");
scanf("%s",&str);
int i;
int count = 0;
for (i=0;str[i]!='\0';i++)
{
  count++;
}
printf("Length of the given string is %d",count);
}
