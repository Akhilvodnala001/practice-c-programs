#include <stdio.h>
#include <unistd.h>
#include <signal.h>
void mysighandler(int sig)
{
  printf("Segmentation fault signal = %d\n",sig);
}
int main()
{
  struct sigaction act;
  act.sa_handler = mysighandler;
  act.sa_flags = 0;
  sigemptyset(&act.sa_mask);
  sigaction(SIGSEGV,&act,NULL);
  while(1)
  {
    printf("Sleep!\n");
    sleep(5);
  }
}
