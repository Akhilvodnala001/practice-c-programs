#include <stdio.h>
#include <string.h>
void togglecase(char []);
int main()
{
char str[30];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
togglecase(str);
printf("The modified string is %s",str);
}
void togglecase(char str[])
{
  int i;
  for (i=0;str[i]!='\0';i++)
  {
    if (str[i]>=65 && str[i]<=90)
    {
      str[i] = str[i]+32;
    }
    else if (str[i]>=97 && str[i]<=122)
    {
      str[i] = str[i]-32;
    }
  }
}

