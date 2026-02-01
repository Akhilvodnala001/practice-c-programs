#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
int i=0,length=0;
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")] = '\0';
while (str[i] != '\0')
{
  length++;
  i++;
}
printf("Length of the string is %d",length);
}
