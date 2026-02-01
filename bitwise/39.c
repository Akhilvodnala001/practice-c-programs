#include <stdio.h>
int main()
{
  int num;
  printf("Enter number: ");
  scanf("%d",&num);
  int even = num;
  int odd = num;
  int n;
  for (int i = 0;i<32;i++)
  {
    if (i%2)
    {
      even = even & (~(1<<i));
    }
    else
    {
      odd = odd & (~(1<<i));
    }
  }
  odd = odd>>1;
  even = even<<1;
  n = odd|even;
  printf("After swapping even and odd bits: %d\n",n);
}
