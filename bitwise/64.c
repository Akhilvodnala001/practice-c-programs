#include <stdio.h>
int main()
{
  int num1,num2;
  printf("Enter Integer-1: ");
  scanf("%d",&num1);
  printf("Enter Integer-2: ");
  scanf("%d",&num2);
  int sum = num1+num2;
  int n = sum;
  int count = 0;
  while (n>0)
  {
    count++;
    n = n&(n-1);
  }
  printf("Total no.of set bits in the number which is sum of %d and %d is %d",num1,num2,count);
}
