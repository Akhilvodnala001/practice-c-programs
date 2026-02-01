#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main()
{
  int cts_fds[2];
  int stc_fds[2];
  pipe(cts_fds);
  pipe(stc_fds);
  pid_t pid = fork();
  if (pid == 0)
  {
    char rxmsg[20];
    close(cts_fds[1]);
    close(stc_fds[0]);
    read(cts_fds[0],rxmsg,20);
    printf("Received message from client = %s\n",rxmsg);
    printf("Processing!!!\n");
    for (int i=0;i<strlen(rxmsg);i++)
    {
      if (rxmsg[i]>=97 && rxmsg[i]<=122)
      {
        rxmsg[i] = rxmsg[i]-32;
      }
    }
    write(stc_fds[1],rxmsg,strlen(rxmsg));
    printf("Successfully sent the processed data to parent!\n");
  }
  else
  {
    char txmsg[20];
    close(cts_fds[0]);
    close(stc_fds[1]);
    printf("Enter request to send to the server: ");
    scanf("%s",txmsg);
    write(cts_fds[1],txmsg,strlen(txmsg));
    read(stc_fds[0],txmsg,20);
    printf("Response from child = %s\n",txmsg);
  }
}
