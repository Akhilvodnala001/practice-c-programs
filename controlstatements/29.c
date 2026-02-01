#include <stdio.h>
int main()
{
char str1[100],str2[100];
printf("Enter the 1st string: ");
scanf("%s",&str1);
printf("Enter the 2nd string: ");
scanf("%s",&str2);

int i=0,j=0;
while(str1[i]!='\0')
{
  i++;
}
while(str1[j]!='\0')
{
  str1[i] = str2[j];
  i++;
  j++;
}
str1[i]='\0';
printf("The concentated string is %s",str1);
}
