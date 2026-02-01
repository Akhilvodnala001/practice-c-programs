#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int i,len;
len=strlen(str);
for (i=len-1;i>=0;i--)
{
  if (str[i-1]!=' ')
  {
    str[i] = '\0';
    break;
  }
}
printf("The modified string is %s",str);

}
