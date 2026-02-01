#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
printf("Enter a string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")] = '\0';
int i,len,position;
len = strlen(str);
printf("Enter the position from where the string is to be splitted: ");
scanf("%d",&position);
for (i=len;i>=position-1;i--)
{
  str[i+1] = str[i];
}
str[position-1] = ' ';
printf("Modified string is %s",str);
}
