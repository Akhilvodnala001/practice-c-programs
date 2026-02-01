#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
char reverse[100];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int i,len;
len = strlen(str);
for (i=0;i<len;i++)
{
  reverse[i] = str[i];
}
int flag = 0;
for (i=0;i<len/2;i++)
{
  if (str[i]!=str[len-i-1])
  {
    flag = 1;
    break;
  }
}
if (flag == 1)
{
  printf("Not palindrome...");
}
else
{
  printf("Palindrome...");
}
}
