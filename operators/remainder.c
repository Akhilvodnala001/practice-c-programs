#include <stdio.h>
int num;
int den;
int main()
{
printf("Enter the numerator: \n");
scanf("%d",&num);
printf("Enter the denominator: \n");
scanf("%d",&den);
int remainder = num % den;
printf("The remainder of the given two numbers is %d\n",remainder);

}
