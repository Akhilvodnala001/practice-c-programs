#include <stdio.h>
#include <string.h>
int uppercase(char str[],int);
int main()
{
  char str[100];
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  int i = 0;
  uppercase(str,i);
  printf("The updated string in all the uppercase characters is \"%s\"",str);
}

int uppercase(char str[],int i)
{
  int len = strlen(str);
  if (i>=len)
  {
    return 0;
  }
  if (str[i]>=97 && str[i]<=122)
  {
    str[i] = str[i]-32;
    uppercase(str,i+1);
  }
  else
  {
    uppercase(str,i+1);
  }
  
}
