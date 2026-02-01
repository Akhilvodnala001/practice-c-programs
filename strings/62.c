#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int i,j,index;
char ch;
printf("Enter the character: ");
scanf("%c",&ch);
for (i=0;i<str[i]!='\0';i++)
{
  if (str[i]==ch)
  {
    index = i;
    break;
  }
}
for (i=index;str[i]!='\0';i++)
{
  str[i] = str[i+1];
}
printf("The modified string is %s",str);
}
