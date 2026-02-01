#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
void togglecase(char *str)
{
  for (int i=0;i<strlen(str);i++)
  {
    if (str[i]>=97 && str[i]<=122)
    {
      str[i] = str[i]-32;
    }
    else if(str[i]>=65 && str[i]<=90)
    {
      str[i] = str[i]+32;
    }
  }
}
int main()
{
  while(1)
  {
    int srvfd = open("srvfifo",O_RDONLY);
    if(srvfd<0)
    {
      if ((mkfifo("srvfifo",0640))<0)
      {
        perror("mkfifo");
        return 1;
      }
      else
      {
        srvfd = open("srvfifo",O_RDONLY);
      }
    }
    char str[1000];
    printf("Server waiting for the request!!!\n");
    int ret = read(srvfd,str,1000);
    if (ret<0)
    {
      perror("read");
      return 1;
    }
    str[ret] = '\0';
    printf("Request from client: %s\n",str);
    close(srvfd);
    togglecase(str);
    int clifd = open("clififo",O_WRONLY);
    if (clifd<0)
    {
      perror("open");
      return 1;
    }
    if ((write(clifd,str,strlen(str)))<0)
    {
      perror("write");
      return 1;
    }
    printf("Response sent to client!!!\n");
  }

}
