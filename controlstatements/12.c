#include <stdio.h>
int main()
{
char ch;
printf("Enter the alphabet: ");
scanf("%c",&ch);
if ((ch>='A')&&(ch<= 'Z'))
{
  printf("Uppercase Alphabet");
}
else if((ch>='a')&&(ch<='z'))
{
  printf("Lowercase Alphabet");
}
else
{
  printf("Not an alphabet");
}
}
