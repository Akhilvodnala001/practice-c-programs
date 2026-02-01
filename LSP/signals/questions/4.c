#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
int main()
{
  sigset_t mask;
  sigemptyset(&mask);
  sigaddset(&mask,SIGTERM);
  sigprocmask(SIG_BLOCK,&mask,NULL);
  sleep(30);
  printf("Unblocked!\n");
  sigprocmask(SIG_UNBLOCK,&mask,NULL);
  sleep(30);
}
