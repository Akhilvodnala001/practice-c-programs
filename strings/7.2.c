#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
char str[30];
int i,alphabets = 0,digits = 0,specialchar = 0,len;
printf("Enter your string: ");
fgets(str,sizeof(str),stdin);
len = strlen(str);
for (i=0;i<len-1;i++)
{
  if (isalpha(str[i]))
  {
    alphabets++;
  }
  else if (isdigit(str[i]))
  {
    digits++;
  }
  else
  {
    specialchar++;
  }
}
printf("No.of Alphabets: %d\n",alphabets);
printf("No.of digits: %d\n",digits);
printf("No.of special characters: %d\n",specialchar);
}
