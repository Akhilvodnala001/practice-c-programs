#include <stdio.h>
int main()
{
//Swapping without using temp variable..
int a,b;
printf("Enter the numbers: ");
scanf("%d %d",&a,&b);
//Using + and -
/*a=a+b;
b=a-b;
a=a-b;*/

//Using * and /
/*a=a*b;
b=a/b;
a=a/b;*/

//Swap using XOR
a=a^b;
b=a^b;
a=a^b;

printf("The swapped numbers are %d,%d",a,b);
}
