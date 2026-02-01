#include <stdio.h>
int main()
{
  int num;
  printf("Enter a number: ");
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
    if (pos%3 == 0)
    {
      printf("Power of 8!\n");
      return 0;
    }
    else
    {
      printf("Not Power of 8!\n");
      return 0;
    }
  }
  else
  {
    printf("Not power of 8!\n");
    return 0;
  }

}
