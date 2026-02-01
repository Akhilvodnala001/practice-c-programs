#include <stdio.h>
int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%x",&num);
  int state_2;
  int state_3;
  state_2 = num & (1<<2);
  state_3 = num & (1<<3);
  if (state_2 && state_3)
  {
    printf("State of 2nd and 3rd bits are 1..");
  }
  else if (!state_2 && !state_3)
  {
    printf("State of 2nd and 3rd bits are 0..");
  }
  else if (!state_2 && state_3)
  {
    printf("State of 2nd bit is 0, 3rd bit is 1..");
  }
  else
  {
    printf("State of 2nd bit is 1, 3rd bit is 0..");
  }
}
