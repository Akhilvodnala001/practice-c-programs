#include <stdio.h>
#include <string.h>
void uppercase(char []);
int main()
{
  char str[100];
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  uppercase(str);
  printf("The modified string in uppercase is %s",str);
}
void uppercase(char str[])
{
  int i;
  for (i=0;str[i]!='\0';i++)
  {
    if (str[i]>=97 && str[i]<=122)\
    {
      str[i] = str[i] - 32;
    }
  }
}

