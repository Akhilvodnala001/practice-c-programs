#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
int main()
{
  int fd = open("srvfifo",O_WRONLY);
  if (fd < 0)
  {
    printf("Run Server first!\n");
    return 0;
  }
  char txmsg[20];
  printf("Enter a request or message for server: ");
  scanf("%s",txmsg);
  write(fd,txmsg,strlen(txmsg));
  
  char rxmsg[20];
  int clfd = open("clififo",O_RDONLY);
  if (clfd<0)
  {
    if (mkfifo("clififo",0640) < 0)
    {
      printf("mkfifo error!\n");
    }
    else
    {
      clfd = open("clififo",O_RDONLY);
    }
  }
  read(clfd,rxmsg,20);
  printf("Response from server = %s\n",rxmsg);
}
