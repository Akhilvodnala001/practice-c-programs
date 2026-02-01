#include <stdio.h>
int findMSB(int num)
{
  int msb = -1;
  while(num>0)
  {
    num = num>>1;
    msb++;
  }
  return msb;
}
int main()
{
  int num;
  printf("Enter number: ");
  scanf("%d",&num);
  int left = findMSB(num);
  int rev = 0;
  int i;
  for (i=0;i<=left;i++)
  {
    int bit = (num>>i)&1;
    rev = rev | (bit<<(left-i));
  }
  printf("%d",rev);
}
