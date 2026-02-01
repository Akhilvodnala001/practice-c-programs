#include <stdio.h>
#include <string.h>
int main()
{
char str[30];
int i,len,word=0;
printf("Enter a string: ");
fgets(str,sizeof(str),stdin);
len = strlen(str);
for (i=0;i<=len;i++)
{
  if ((str[i] == ' ' || str[i] == '\n') && (str[i] != '\0'))
  {
    word++;
  }
}
printf("Number of words in the given string is %d",word);
}
