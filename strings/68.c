#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int i,j;
char ch,re;
printf("Enter the character to be replaced: ");
scanf("%c",&ch);
printf("Enter the character to be replaced with: ");
scanf(" %c",&re);
for (i=0;str[i]!='\0';i++)
{
  if (str[i]==ch)
  {
    for (j=i+1;str[j]!='\0';j++)
    {
      if (str[i]==str[j])
      {
        str[j] = re;
      }
    }
    break;
  }
}
printf("The modified string is %s",str);
}
