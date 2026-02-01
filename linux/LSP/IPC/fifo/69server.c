#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
int main()
{
    int srvfd = open("srvfifo",O_RDONLY);
    if (srvfd<0)
    {
      if (mkfifo("srvfifo",0640)<0)
      {
        perror("mkfifo");
        return 1;
      }
      else
      {
        srvfd = open("srvfifo",O_RDONLY);
      }
    }
    while(1)
    {
      char str[1000];
      printf("Waiting for message from client!!\n");
      int ret = read(srvfd,str,1000);
      if (ret<0)
      {
        perror("read");
        return 1;
      } 
      str[ret] = '\0';
      printf("Message from client: %s\n",str);
    }
}
