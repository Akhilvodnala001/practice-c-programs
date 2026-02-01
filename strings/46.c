#include <stdio.h>
#include <string.h>
void uppercase(char []);
int main()
{
char str[30];
printf("Enter the lowercase string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int i,flag = 1;
for (i=0;i<str[i]!='\0';i++)
{
  if (!(str[i]>=97 && str[i]<=122))
  {
    flag = 0;
    break;
  }
}
if (flag == 1)
{
  uppercase(str);
  printf("The modified string is %s",str);
}
else
{
  printf("lowercase strings only...");
} 
}
void uppercase(char str[])
{
  int i,len;
  len = strlen(str);
  for (i=0;i<len;i++)
  {
    if (str[i]>=97 && str[i]<=122)
    {
      str[i] = str[i] - 32;
    }
  }
}
