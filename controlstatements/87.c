#include <stdio.h>
int main()
{
int num;
int sum=0;
int digit;
printf("Enter a number: ");
scanf("%d",&num);
int i=num;
while (i>0)
{
  digit = 0;
  digit = i%10;
  sum = sum + (digit*digit*digit);
  i=i/10;
}
printf("The sum of the cube of the digits of %d is %d \n",num,sum);
}
