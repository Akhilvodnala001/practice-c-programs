#include <stdio.h>
int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  int i = 1;
  int n = num;
  while (n>0)
  {
    num = num|(1<<i);
    n >>= 2;
    i += 2;
  }
  printf("Number after setting odd bit positions: %d\n",num);
}
