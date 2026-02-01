#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
void timeouthandler(int sig)
{
  printf("Time out occurred!\n");
  return;
}
int main()
{
  signal(SIGALRM,timeouthandler);
  char str[100];
  printf("Enter a string(you have only 5 seconds to enter!\n): ");
  alarm(5);
  if (fgets(str,sizeof(str),stdin) != NULL)
  {
    alarm(0);
    printf("Input is %s\n",str);
  }
  else
  {
    printf("Try again!\n");
  }
}
