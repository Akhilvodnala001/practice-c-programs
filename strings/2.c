#include <stdio.h>
int main()
{
char str[30];
int i,length = 0;
printf("Enter your name: ");
fgets(str,sizeof(str),stdin);
for (i=0;str[i] != '\0' && str[i] != '\n';i++)
{
  length++;
}
printf("Length of given string is %d",length);
}
