#include <stdio.h>
int main()
{
char ch;
printf("Enter the character: ");
scanf("%c",&ch);
if ((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
{
  if ((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
  {
    printf("Given character is a vowel");
  }
  else
  {
  printf("Given character is not a vowel but an alphabet");
  }
}
}
