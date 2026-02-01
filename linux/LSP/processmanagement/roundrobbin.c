#include <stdio.h>
int main()
{
  int n = 3;
  int bt[3] = {10,5,3};
  int rem[3];
  int tq = 4;
  int time = 0;
  int i,done;
  for (i=0;i<n;i++)
  {
    rem[i] = bt[i];
  }
  while(1)
  {
    done  = 1;
    for (i=0;i<n;i++)
    {
      if (rem[i]>0)
      { 
        done = 0;
        printf("p%d runs from %d to ",i+1,time);
        if (rem[i]>tq)
        {
          time += tq;
          rem[i] -= tq;
        }
        else
        {
          time += rem[i];
          rem[i] = 0;
        }
        printf("%d (remaining time for p%d is %d)\n",time,i+1,rem[i]);
      }
    }
    if (done)
    {
      break;
    }
  }
  

}
