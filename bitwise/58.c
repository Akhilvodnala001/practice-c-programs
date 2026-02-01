#include <stdio.h>
#define state(num,pos) ((num>>pos)&1)
int main()
{
  int num;
  printf("Enter number: ");
  scanf("%d",&num);
  int n = num;
  int i = 0;
  while (n>0)
  {
    if (((state(num,i)) == 0) &&  ((state(num,i+1)) == 1))
    {
      num = num|(1<<i);
      num = num&(~(1<<(i+1)));
    }
    else if (((state(num,i)) == 1) &&  ((state(num,i+1)) == 0))
    {
      num = num&(~(1<<i));
      num = num|(1<<(i+1));
    }
    n >>= 2;
    i = i+2;
  }
  printf("After swapping adjacent bits: %d",num);
}
