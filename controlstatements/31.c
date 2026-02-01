#include <stdio.h>
int main()
{
char str[100];
printf("Enter the string: ");
scanf("%s",&str);
int i;
for(i=0;str[i]!='\0';i++)
{
  if(str[i]>=97 && str[i]<=122)
  {
    str[i]=str[i]-32;
  }
}
printf("The uppercase of the given string is %s",str);
}
