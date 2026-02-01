#include <stdio.h>
#include <unistd.h>
int main()
{
  printf("Before EXECL\n");
  execlp("ls","ls","-l",'\0');
  printf("After EXECL\n");
}
