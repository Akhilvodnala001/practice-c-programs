#include <stdio.h>
#include <string.h>
int fun(char [],int,char);
int main()
{
char str[100];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';

char ch;
printf("Enter the character: ");
scanf("%c",&ch);

int len = strlen(str);
int i = len-1;
int result = fun(str,i,ch);
if (result == -1)
{
  printf("Not Found!");
}
else
{
  printf("The index of the last occurrence of %c is %d",ch,result);
} 
}

int fun(char str[],int i,char ch)
{
  int index;
  if (i<0)
  {
    return -1;
  }
  if (str[i] == ch)
  {
    return i;
  }
  else
  {
    fun(str,i-1,ch);
  }
}
