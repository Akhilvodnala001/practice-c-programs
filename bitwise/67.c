#include <stdio.h>
int main()
{
  int num;
  printf("Enter number: ");
  scanf("%d",&num);
  int n = num;
  int i = 1;
  while (n>0)
  {
    num = num^(1<<i);
    i = i+2;
    n >>= 2;
  }
  printf("After toggling odd bits in the given number: %d\n",num);

}
