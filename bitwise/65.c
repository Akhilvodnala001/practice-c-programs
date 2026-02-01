#include <stdio.h>
int main()
{
  int num;
  printf("Enter number: ");
  scanf("%d",&num);
  int n = num;
  if ((num&(num-1)) == 0)
  {
    int pos = -1;
    while (n>0)
    {
      n >>= 1;
      pos++;
    }
    if (pos%4 == 0)
    {
      printf("Power of 16!\n");
      return 0;
    }
    else
    {
      printf("Not Power of 16!\n");
      return 0;
    }
  }
  else
  {
    printf("Not Power of 16!\n");
    return 0;
  }

}


