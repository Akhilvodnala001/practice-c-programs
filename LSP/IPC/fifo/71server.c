#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
int main()
{
    int srvfd = open("srvfifo",O_RDWR);
    if (srvfd<0)
    {
      if (mkfifo("srvfifo",0640)<0)
      {
        perror("mkfifo");
        return 1;
      }
      else
      {
        srvfd = open("srvfifo",O_RDWR);
      }
    }
    char str[100];
    while (1)
    {
      printf("Waiting for the message from the cleint!!!\n");
      int ret = read(srvfd,str,100);
      if (ret<0)
      {
        perror("read");
        return 1;
      }
      str[ret] = '\0';
      printf("Message from client: %s\n",str);
    } 
}
