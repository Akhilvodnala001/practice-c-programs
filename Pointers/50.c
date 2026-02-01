#include <stdio.h>
void sum(int a,int b)
{
  printf("Sum of a and b is %d\n",a+b);
}
void sub(int a,int b)
{
  printf("Subtraction of a and b is %d\n",a-b);
}
void mul(int a,int b)
{
  printf("Multiplication of a and b is %d\n",a*b);
}
void div(int a,int b)
{
  printf("Division of a and b is %d\n",a/b);
}
int main()
{
  int a;
  int b;
  int ch;
  void (*fptr[4])(int,int) = {sum,sub,mul,div};
  printf("Enter a: ");
  scanf("%d",&a);
  printf("Enter b: ");
  scanf("%d",&b);
  printf("Enter a number(sum-0,sub-1,mul-2,div-3): ");
  scanf("%d",&ch);
  (*fptr[ch])(a,b);
}
