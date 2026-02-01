#include <stdio.h>
#include <string.h>
int reverse(char [],int);
int main()
{
  char str[100];
  printf("Enter the string: ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  
  int i=0;
  reverse(str,i);
  printf("Reverse string: %s",str);
}
int reverse(char str[],int i)
{
  int len;
  len = strlen(str);
  if (i>=len/2)
  {
    return 0;
  } 
  int temp = str[i];
  str[i] = str[len-i-1];
  str[len-i-1] = temp;
  reverse(str,i+1);
}
