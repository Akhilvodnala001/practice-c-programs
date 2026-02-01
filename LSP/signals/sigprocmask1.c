#include <stdio.h>
#include <unistd.h>
#include <signal.h>
void mysighandler(int sig)
{
  printf("My signal is %d\n",sig);
  sleep(5);
}
int main()
{ 
  signal(SIGINT,mysighandler);
  sigset_t mask;
  sigemptyset(&mask);
  sigaddset(&mask,SIGILL);
  sigprocmask(SIG_BLOCK,&mask,NULL);
  printf("BLOCKED!\n");
  sleep(30);
  printf("UNBLOCKED!\n");
  sigprocmask(SIG_UNBLOCK,&mask,NULL);
  sleep(30);
}
