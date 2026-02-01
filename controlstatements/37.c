#include <stdio.h>
#include <math.h>
int main()
{
int digit;
int sum=0;
int num;
int n;
int remainder;
int original;
for (num=1;num<=1000;num++)
{
  original=num;
  digit=0;
  n=num;
  while(n!=0)
  {
    n=n/10;
    digit++;
  }
  sum=0;
  n=num;
  while(n!=0)
  {
    remainder=n%10;
    sum += pow(remainder, digit);
    n=n/10;
  }
  if(sum==original)
  {
    printf("%d\n",original);
  }
}
}
