#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int i,alpha=0,num=0,spec=0;
for (i=0;str[i]!='\0';i++)
{
  if ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
  {
    alpha++;
  }
  else if(str[i]>=48 && str[i]<=57)
  {
    num++;
  }
  else
  {
    spec++;
  }
}
printf("\nThe no.of alphabets in the string is %d\n",alpha);
printf("The no.of digits in the string is %d\n",num);
printf("The no.of special characters in the string is %d\n",spec);

}
