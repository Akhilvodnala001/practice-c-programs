#include <stdio.h>
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  int n = num;
  if (((num&(num-1)) == 0))
  {
    int pos = -1;
    while (n>0)
    {
      n = n>>1;
      pos++;
    }
    if (pos%2 == 0)
    {
      printf("Power of 4!\n");
    }
    else
    {
      printf("Not Power of 4!\n");
    }
  }
  else
  {
    printf("Not Power of 4!\n");
  }

}
