#include <stdio.h>
int main()
{
char ch;
printf("Enter the character: ");
scanf("%c",&ch);
if ((ch>='0' && ch<='9') || (ch>=65 && ch<=70))
{
  printf("Given character is a hexadecimal digit...");
}
else
{
  printf("Given character is not a hexadecimal digit...");
}

}
