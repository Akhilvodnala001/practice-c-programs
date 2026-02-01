#include <stdio.h>
#include <unistd.h>
#include <signal.h>
void timerhandler(int sig)
{
  printf("Received signal = %d\n",sig);
  alarm(1);
}
int main()
{
  signal(SIGALRM,timerhandler);
  alarm(5);
  while(1)
  {
    pause();
  }
}
