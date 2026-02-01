#include <stdio.h>
int main()
{
char str[200];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
int words = 0;
int i=0;
while (str[i] != '\0')
{
  if (((str[i] != ' ') && (str[i] != '\n') && (str[i] != '\t') && (str[i] != '\0')) && (str[i+1]==' ' || str[i+1]=='\n' ||str[i+1]=='\t' ||str[i+1]=='\0')) 
  {
    words++;
  }
  i++;

}
printf("No.of words in the string = %d",words);

}
