#include <stdio.h>
#include <string.h>
int fun(char [],char,int);
int main()
{
  char str[100];
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  
  char ch;
  printf("Enter the character: ");
  scanf("%c",&ch);
  
  int i=0;
  int result;
  result = fun(str,ch,i);
  if (result == -1)
  {
    printf("Not Found!");
  }
  else
  {
    printf("The index of the first occurrence of %c is %d",ch,result);
  }
}

int fun(char str[],char ch,int i)
{
  if (str[i]=='\0')
  {
    return -1;
  }
  if (str[i] == ch)
  {
    return i;
  }
  else
  {
    fun(str,ch,i+1);
  }
}
