#include <stdio.h>
int main()
{
  int num;
  printf("Enter the range: ");
  scanf("%d",&num);
  int i;
  int result = 0;
  for (i=1;i<=num;i++)
  {
    result ^= i;
  }
  printf("XOR of range of %d numbers is %d",num,result);
}
