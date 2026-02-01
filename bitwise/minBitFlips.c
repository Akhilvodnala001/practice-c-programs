#include <stdio.h>
int main()
{
  int x,y;
  printf("Enter number to be converted: ");
  scanf("%d",&x);
  printf("Enter number to which the first is to be converted: ");
  scanf("%d",&y);
  int num;
  num = x^y;
  int count = 0;
  int i;
  while (num>0)
  {
    count++;
    num=num &(num-1);
  }
  /*for (i=0;i<31;i++)
  {
    if (num & (1<<i))
    {
      count++;
    }
  }*/
  printf("MINIMUM Number of bits to flipped in %d to convert it to %d is %d...\n",x,y,count);
}
