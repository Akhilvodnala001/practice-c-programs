#include <stdio.h>
#include <string.h>
int palindrome(char [],int,int);
int main()
{
char str[100];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int len,i;
len = strlen(str);
i=0;
int result = palindrome(str,len,i);
if (result == 0)
{
  printf("Not Palindrome! ");
}
else
{
  printf("Palindrome! ");
}
}

int palindrome(char str[],int len,int i)
{
  if (i>len/2)
  {
    return 1;
  }
  if (str[i]!=str[len-i-1])
  {
    return 0;
  }
  palindrome(str,len,i+1);
}
