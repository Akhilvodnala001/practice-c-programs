#include <stdio.h>
#include <string.h>
int replace(char [],char,char,int);
int main()
{
  char str[100];
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  
  char ch;
  printf("Enter the character to be replaced: ");
  scanf("%c",&ch);
  
  char re;
  printf("Enter the character to be replaced with: ");
  scanf(" %c",&re);
  
  int i = 0;
  replace(str,ch,re,i);
  printf("The modified string is %s",str);
}
int replace(char str[],char ch,char re,int i)
{
  if (str[i]=='\0')
  {
    return 0;
  }
  if (str[i] == ch)
  {
    str[i] = re;
  }
  replace(str,ch,re,i+1);
}
