#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int i=0,j,leadspace=0;
int len;
len = strlen(str);
while (str[i]==' ')
{
  leadspace++;
  i++;
}
for (i=0;i<=len-leadspace;i++)
{
  str[i] = str[i+leadspace];
}
len = strlen(str);
for (i=len-1;i>=0;i--)
{
  if (str[i-1] != ' ')
  {
    str[i] = '\0';
    break;
  }
}
for (i=0;str[i]!='\0';i++)
{
  if ((str[i] == ' ') && (str[i+1] == ' '))
  {
    for (j=i+1;str[j+1]!='\0';j++)
    {
      str[j] = str[j+1];
    }
    str[strlen(str)-1] = '\0';
    i--; //Rechecks the current index
  }
}
printf("The modified string after removing extra spaces is %s",str);
}
