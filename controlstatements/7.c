#include <stdio.h>
int main()
{
int a;
int b;
int c;
printf("Enter a: ");
scanf("%d",&a);
printf("Enter b: ");
scanf("%d",&b);
printf("Enter c: ");
scanf("%d",&c);

if ((a>b)&&(a>c))
{
  printf("a is greater");
}
if ((b>a)&&(b>c))
{
  printf("b is greater");
}
if ((c>a)&&(c>b))
{
  printf("c is greater");
}

}
