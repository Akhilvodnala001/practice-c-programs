#include <stdio.h>
#include <string.h>
#include <ctype.h>
int palindrome(char [],int,int);
int main()
{
  char str[100];
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  int i,len;
  len = strlen(str);
  i = 0;
  int k=0;
  char pal[len];
  for (i=0;i<len;i++)
  {
    if ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
    {
      pal[k] = tolower(str[i]);
      k++;
    }
  }
  pal[k] = '\0';
  
  len = strlen(pal);
  i = 0;
  int result = palindrome(pal,i,len);
  
  if (result == 0)
  {
    printf("Not Palindrome!");
  }
  else
  {
    printf("Palindrome!");
  }
  return 0;
}
int palindrome(char pal[],int i,int len)
{
  if (i>len/2)
  {
    return 1;
  }
  if (pal[i]!=pal[len-i-1])
  {
    return 0;
  }
  palindrome(pal,i+1,len);
}

