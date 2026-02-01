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
char re;
printf("Enter the character to be replaced: ");
scanf("%c",&ch);
printf("Enter the character to be replaced with: ");
scanf(" %c",&re);
for (i=0;i<str[i];i++)
{
  if (str[i]==ch)
  {
    index=i;
  }
}
str[index]=re;
printf("The modified string is %s",str);
}
