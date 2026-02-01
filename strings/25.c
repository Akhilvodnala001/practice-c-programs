#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
printf("Enter a sentence: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")] = '\0';
char ch;
printf("Enter any character to replace space: ");
scanf("%c",&ch);
int i,len;
len = strlen(str);
for (i=0;i<len;i++)
{
  if (str[i] == ' ')
  {
    str[i] = ch;
  }
}
printf("The modified string is %s",str);

}
