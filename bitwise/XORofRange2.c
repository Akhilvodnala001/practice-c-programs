#include <stdio.h>
int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  int result;
  if (num%4 == 1)
  {
    result = 1;
  }
  else if (num%4 == 2)
  {
    result = num+1;
  }
  else if (num%4 == 3)
  {
    result = 0;
  }
  else if (num%4 == 0)
  {
    result = num;
  }
  printf("XOR of range of %d numbers is %d",num,result);
}
