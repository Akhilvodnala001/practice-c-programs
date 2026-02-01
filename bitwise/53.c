#include <stdio.h>
int main()
{
  int num;
  printf("Enter number: ");
  scanf("%d",&num);
  int pos;
  printf("Enter the number of positions to be shifted: ");
  scanf("%d",&pos);
  int leftshift = num<<pos;
  int rightshift = num>>(32-pos);
  num = leftshift | rightshift;
  printf("After rotation of bits by %d positions: %d\n",pos,num);
}
