#include <stdio.h>
int main()
{
int a,b;
char op;
printf("Enter 1st number: ");
scanf("%d",&a);
printf("Enter 2nd number: ");
scanf("%d",&b);
printf("Enter the operation +,-,*,/,mod ");
scanf(" %c",&op);
switch(op)
{
  case '+':
    printf("The addition of %d and %d is %d",a,b,a+b);
    break;
  case '-':
    printf("The subtraction of %d and %d is %d",a,b,a-b);
    break;
  case '*':
    printf("The multiplication of %d and %d is %d",a,b,a*b);
    break;
  case '/':
    printf("The division(Quotient) of %d and %d is %d",a,b,a/b);
    break;
  case '%':
    printf("The remainder of %d and %d is %d",a,b,a%b);
    break;
}
}
