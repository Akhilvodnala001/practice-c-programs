#include <stdio.h>
#define toggle(num,start,end) num^(((1<<(end-start+1))-1)<<start)
#define state(num,pos) num&1<<pos
int main()
{
  int num,s,e;
  printf("Enter a number: ");
  scanf("%d",&num);
  printf("Enter range:\n ");
  printf("From index:");
  scanf("%d",&s);
  printf("To: ");
  scanf("%d",&e);
  num = toggle(num,s,e);
  printf("Number after toggling from range %d to %d is %d\n",s,e,num);
  
  int pos;
  printf("Enter the position of the bit to check the state: ");
  scanf("%d",&pos);
  if (state(num,pos))
  {
    printf("SET!");
  }
  else
  {
    printf("NOT SET!");
  }
  
}
