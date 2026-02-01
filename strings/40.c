#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int i;
for (i=0;i<strlen(str);i++)
{
  if (str[i]>=97 && str[i]<=122)
  {
    str[i] = str[i]-32;
  }
}
printf("The modified string is %s",str);

}
