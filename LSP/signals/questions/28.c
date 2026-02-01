#include <stdio.h>
#include <unistd.h>
#include <signal.h>
int main()
{
  sigset_t mask;
  sigemptyset(&mask);
  sigaddset(&mask,SIGINT);
  sigaddset(&mask,SIGTSTP);
  sigaddset(&mask,SIGTERM);
  sigprocmask(SIG_BLOCK,&mask,NULL);
  while(1)
  {
    printf("sleep!\n");
    sleep(5);
  }
  sigprocmask(SIG_UNBLOCK,&mask,NULL);
}
