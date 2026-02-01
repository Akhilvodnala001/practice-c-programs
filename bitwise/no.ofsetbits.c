#include <stdio.h>
int main()
{
  int num;
  printf("Enter number: ");
  scanf("%d",&num);
  int i;
  int count = 1;
  int n = num;
  while(n>1)
  {
    if (n%2 == 1)
    {
      count++;
    }
    n = n/2;
  }
  printf("No.of set bits in %d is %d",num,count);

}
