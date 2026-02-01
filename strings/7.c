#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
int i,alphabets = 0,digits = 0,specialchar = 0,len;
printf("Enter your string: ");
fgets(str,sizeof(str),stdin);
len = strlen(str);
for (i=0;i<len-1;i++)
{
  if ((str[i] >= 65 && str[i] <= 90)||(str[i]>=97 && str[i]<=122))
  {
    alphabets++;
  }
  else if (str[i]>=48 && str[i]<=57)
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
