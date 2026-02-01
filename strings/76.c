#include <stdio.h>
#include <string.h>
int main()
{
char str[500];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int i,j,len,leadspace=0;
len =strlen(str);
for (i=0;str[i]==' ';i++)
{
  leadspace++;
}
for (i=0;i<=len-leadspace;i++)
{
  str[i]=str[i+leadspace];
}
printf("The modified string is %s",str);
}
