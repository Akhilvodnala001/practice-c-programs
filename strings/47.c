#include <stdio.h>
#include <string.h>
void lowercase(char []);
int main()
{
char str[30];
printf("Enter the UPPERCASE string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")] = '\0';
int i,flag = 1;
for (i=0;str[i]!=0;i++)
{
  if (!(str[i]>=65 && str[i]<=90))
  {
    flag = 0;
    break;
  }
}
if (flag == 1)
{
  lowercase(str);
  printf("The modified string is %s",str);
}
else
{
  printf("UPPERCASE Strings only!");
}
}
void lowercase(char str[])
{
  int i;
  for (i=0;str[i]!='\0';i++)
  {
    if (str[i]>=65 && str[i]<=90)
    {
      str[i] = str[i] + 32;
    }
  }
}
