#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
void togglecase(char *str)
{
  int i;
  int len = strlen(str);
  for (i=0;i<len;i++)
  {
    if (str[i]>=97 && str[i]<=122)
    {
      str[i] = str[i]-32;
    }
  }
}
int main()
{
  pid_t pid;
  int fds_snd[2];
  int fds_rec[2];
  pipe(fds_snd);
  pipe(fds_rec);
  pid = fork();
  if (pid == 0)
  {
    close(fds_snd[1]);
    close(fds_rec[0]);
    char recmsg[20];
    read(fds_snd[0],recmsg,20);
    printf("Received message from parent: %s\n",recmsg);
    printf("Processing!!!\n");
    int i;
    int len = strlen(recmsg);
    for (i=0;i<len;i++)
    {
      if (recmsg[i]>=97 && recmsg[i]<=122)
      {
        recmsg[i] = recmsg[i]-32;
      }
    }
    write(fds_rec[1],recmsg,strlen(recmsg));
    printf("Processed data send to parent!\n");
    
  }
  else
  {
    close(fds_snd[0]);
    close(fds_rec[1]);
    char txmsg[20];
    printf("Enter message to send to child: ");
    scanf("%s",txmsg);
    write(fds_snd[1],txmsg,strlen(txmsg));
    read(fds_rec[0],txmsg,strlen(txmsg));
    printf("Response from child: %s\n",txmsg);
  }
} 
