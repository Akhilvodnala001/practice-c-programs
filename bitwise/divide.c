#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
  int num;
  int den;
  printf("Enter numerator: ");
  scanf("%d",&num);
  printf("Enter Denominator: ");
  scanf("%d",&den);
  int sign = 1;
  int q = 0;
  if (num == 0)
  {
    printf("Quotient: %d",q);
    return 0;
  }
  if (den == 0)
  {
    printf("Denominator cannot be zero...");
  }
  if ((num>0 && den<0) || (num<0 && den>0))
  {
    sign = -1;
  }
  num = abs(num);
  den = abs(den);
  while (num>=den)
  {
    int count = 0;
    while (num>=(den<<(count+1)))
    {
      count++;
    }
    q += (1<<count);
    num -= (den<<count);
  }
  if (q > INT_MAX)
  {
    printf("Out of +ve range..."); 
    return 0;
  }
  else if(q < INT_MIN)
  {
    printf("Out of -ve range...");
    return 0;
  }
  if (sign)
  {
    printf("QUOTIENT is %d",q);
  }
  else
  {
    printf("QUOTIENT is %d",-1*q);
  }
  
}
