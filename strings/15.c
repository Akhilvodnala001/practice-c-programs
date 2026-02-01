#include<stdio.h>
#include <string.h>
void fun(char [],int);
int main()
{
  char str[30];
  int i,j,len;
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  len = strlen(str);
  for (i=0;i<len-1;i++)
  {
    if (str[i]>=65 && str[i]<=90)
    {
      str[i] = str[i] + 32;
    }
    else if (str[i]>=97 && str[i]<=122)
    {
      str[i] = str[i] - 32;
    }
  }
  printf("%s",str);
}
