#include <stdio.h>
#include <string.h>
int main()
{
char ch;
printf("Enter any character: ");
scanf("%c",&ch);
if (ch>=97 && ch<=122)
{
  printf("LOWERCASE");
}
else if(ch>=65 && ch<=90)
{
  printf("NOT LOWERCASE");
}
else
{
  printf("NOT ALPHABET");
}

}
