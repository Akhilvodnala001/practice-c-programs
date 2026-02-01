#include <stdio.h>
#include <string.h>
int strToint(char [],int);
int main()
{
char str[100];
printf("Enter a number: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int len = strlen(str);
int i = len-1;
int num = strToint(str,i);
printf("Number is %d",num);
}
int strToint(char str[],int i)
{
  if (i<0)
  {
    return 0;
  }
  return strToint(str,i-1)*10+(str[i]-'0');
}

