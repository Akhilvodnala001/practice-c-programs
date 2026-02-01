#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int i,j,index[strlen(str)];
char ch;
int k=0;
printf("Enter the character: ");
scanf("%c",&ch);
for (i=0;i<str[i]!='\0';i++)
{
  if (str[i]==ch)
  {
    index[k] = i;
    k++;
  }
}
for (i=0;i<k;i++)
{
  for (j=index[i]-i;str[j]!='\0';j++)
  {
    str[j] = str[j+1];
  }
}
printf("The modified string is %s",str);
}
