#include <stdio.h>
int main()
{
  int num1,num2;
  printf("Integer-A: ");
  scanf("%d",&num1);
  printf("Integer-B: ");
  scanf("%d",&num2);
  int num = num1^num2;
  int count = 0;
  while (num>0)
  {
    num = num&(num-1);
    count++;
  }
  printf("Total no.of bits need to be converted from integer-A to integer-B: %d\n",count);
  
  
}
