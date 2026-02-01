#include <stdio.h>
#include <string.h>
int main()
{
char ch;
printf("Enter a character: ");
scanf("%c",&ch);
if (ch>=48 && ch<=57)
{
  printf("Given character is a digit...");
}
else
{
  printf("Given character is not a digit...");
}

}
