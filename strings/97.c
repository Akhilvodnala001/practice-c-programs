#include <stdio.h>
#include <string.h>
int vowels(char [],int);
int main()
{
char str[500];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int i = 0;
printf("No.of vowels in the string is %d",vowels(str,i));
}
int vowels(char str[],int i)
{
  if (str[i] =='\0')
  {
    return 0;
  }
  if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
  {
    return 1 + vowels(str,i+1);
  }
  else
  {
    return vowels(str,i+1);
  }
}
