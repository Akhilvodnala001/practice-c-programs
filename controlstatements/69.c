#include <stdio.h>
int main()
{
char ch;
printf("Enter a character: ");
scanf("%c",&ch);

int i;
for (i=0;i<127;i++)
{
  if (ch == i)
  {
    printf("The ascii value of %c is %d...",ch,i);
  }
}
}
