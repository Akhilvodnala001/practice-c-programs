#include <stdio.h>
#define state(n,i) (n>>i)&1
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  int pos1,pos2;
  printf("Enter position-1: ");
  scanf("%d",&pos1);
  printf("Enter position-2: ");
  scanf("%d",&pos2);
  int n = num;
  if ((state(n,pos1)) != state(n,pos2))
  {
    n = n^(1<<pos1);
    n = n^(1<<pos2);
  }
  printf("After swapping bits at positions %d and %d is %d",pos1,pos2,n);
}
