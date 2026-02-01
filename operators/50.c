#include <stdio.h>
int main()
{
int a=50,b,n;
printf("Enter the number: ");
scanf("%d",&b);
n=50-b;
((n>0)?printf("b is less than 50"):(n==0)?(printf("b is equal to 50")):printf("b is greater than 50"));
}
