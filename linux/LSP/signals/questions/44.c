#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include <signal.h>
void watchdog_handler(int sig)
{
  printf("[WATCHDOG] timeout!\n");
  _exit(1);
}
void perform_task()
{
  static int count = 0;
  count++;
  printf("TASK-%d Performed!\n",count);
  alarm(5);
}
int main()
{
  signal(SIGALRM,watchdog_handler);
  alarm(5);
  for (int i=0;i<3;i++)
  {
    perform_task();
    sleep(4);
  }
  printf("Done with the tasks!\n");
}
