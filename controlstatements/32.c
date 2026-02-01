#include <stdio.h>
//#include <math.h>
int main()
{
int base,exponent;
printf("Enter base: ");
scanf("%d",&base);
printf("Enter exponent: ");
scanf("%d",&exponent);
int result =1;
int i;
//Without using for loop
//result=pow(base, exponent);

//With using for loop
for(i=0;i<exponent;i++)
{
  result = result*base;
}
printf("The result is %d",result);
}
