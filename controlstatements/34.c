#include <stdio.h>
int main()
{
int a,b;
printf("Enter a: ");
scanf("%d",&a);
printf("Enter b: ");
scanf("%d",&b);
while(b!=0)
{
int temp = b;
b=a%b;
a=temp;
}
printf("The GCD of a and b is %d",a);

}
