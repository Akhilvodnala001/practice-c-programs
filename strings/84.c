#include <stdio.h>
#include <string.h>
void trimming(char []);
int main()
{
  char str[100];
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  trimming(str);
  printf("The modified string is %s",str);
}


void trimming(char str[])
{
  int len,i=0,leadspace=0;
  //Leading spaces
  while (str[i]==' ')
  {
    leadspace++;
    i++;
  }
  len = strlen(str);
  for (i=0;i<=len-leadspace;i++)
  {
    str[i]=str[i+leadspace];
  }
  
  //Trailing spaces
  len = strlen(str);
  for (i=len-1;i>=0;i--)
  {
    if (str[i-1]!=' ')
    {
      str[i] = '\0';
      break;
    }
  }
}
