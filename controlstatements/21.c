#include <stdio.h>
int main()
{
int num;
int digit=1;
printf("Enter the number to be reversed: ");
scanf("%d",&num);
printf("the reversed number is ");  
while (digit>0)
{
digit = num%10;
num = num/10;
if (digit>0)
{
printf("%d",digit);
}
}
}
