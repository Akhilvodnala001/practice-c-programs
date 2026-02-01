#include <stdio.h>
struct Time
{
  int hours;
  int minutes;
  int seconds;
};
struct Time TimeSum(struct Time t1,struct Time t2)
{
  struct Time result;
  result.seconds = t1.seconds + t2.seconds;
  result.minutes = t1.minutes + t2.minutes + result.seconds/60;
  result.seconds = result.seconds%60;
  
  result.hours = t1.hours + t2.hours + result.minutes/60;
  result.minutes = result.minutes%60;
  
  return result;
}
int main()
{
  struct Time time1,time2,sum;
  printf("Enter Time-1(HOURS MINUTES SECONDS): ");
  scanf("%d %d %d",&time1.hours,&time1.minutes,&time1.seconds);
  
  printf("Enter Time-2(HOURS MINUTES SECONDS): ");
  scanf("%d %d %d",&time2.hours,&time2.minutes,&time2.seconds);
  
  sum = TimeSum(time1,time2);

  printf("The Time sum of Time-1 and Time-2 is %d Hours %d Minutes %d Seconds!",sum.hours,sum.minutes,sum.seconds);
}
