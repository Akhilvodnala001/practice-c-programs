#include <stdio.h>
#define removelastset(n) n&(n-1)
int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  int count = 0;
  int n = num;
  while(n>0)
  {
    n = removelastset(n);
    count++;
  }
  printf("No.of set bits is %d\n",count);
}
