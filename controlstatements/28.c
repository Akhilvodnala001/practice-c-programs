#include <stdio.h>
#include <string.h>
int main()
{
char str[200];
printf("Enter the string: ");
scanf("%s",&str);
int len = strlen(str);
int i;
int flag=1;
int palindrome = 0;
for (i=0;i<len/2;i++)
{
  if(str[i]!=str[len-i-1])
  {
    flag = 0;
    break;
  }
}
if (flag==0)
{
  printf("Given string is not a palindrome...");
}
else
{
  printf("Given string is a palindrome...");
}
}
