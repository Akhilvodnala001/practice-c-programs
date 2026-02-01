#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
void togglecase(char *str)
{
  for (int i=0;i<strlen(str);i++)
  {
    if (str[i]>=97 && str[i]<=122)
    {
      str[i] = str[i] - 32;
    }
    else if(str[i]>=65 && str[i]<=90)
    {
      str[i] = str[i] + 32;
    }
  }
}
int main()
{
  int fd = open("srvfifo",O_RDONLY);
  char rxmsg[20];
  if (fd<0)
  {
    if (mkfifo("srvfifo",0640)<0)
    {
      printf("mkfifo error!\n");
    }
    else
    {
      fd = open("srvfifo",O_RDONLY);
    }
  }
  read(fd,rxmsg,20);
  printf("Received from client = %s\n",rxmsg);
  togglecase(rxmsg);
  int clifd = open("clififo",O_WRONLY);
  write(clifd,rxmsg,strlen(rxmsg));
}
