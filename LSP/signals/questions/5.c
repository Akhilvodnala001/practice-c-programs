#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
void mysighandler(int sig)
{
  printf("Alarm expired!\n");
  printf("Signal received = %d\n",sig);
  sleep(5);
}
int main()
{
  struct sigaction act;
  act.sa_handler = mysighandler;
  act.sa_flags = 0;
  sigemptyset(&act.sa_mask);
  sigaction(SIGALRM,&act,NULL);
  alarm(5);
  pause();
  printf("Program ending!\n");
  return 0;
}
