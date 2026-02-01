//Greatest among 3 numbers using conditional operators...

#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter a: ");
scanf("%d",&a);
printf("Enter b: ");
scanf("%d", &b);
printf("Enter c: ");
scanf("%d",&c);

((a>b) && (a>c))?(printf("a is greater")):
(b>a)&&(b>c)?(printf("b is greater")):(printf("c is greater"));

}
