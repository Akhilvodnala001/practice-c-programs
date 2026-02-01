#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>
#include <signal.h>
#define KEY 199440
#define MSG_REQ_TYPE 1
#define MSG_RES_TYPE 2
struct msg
{
  long mtype;
  pid_t pid;
  char str[100];
};
void toggle(char *str)
{
  for (int i=0;i<strlen(str);i++)
  {
    if (str[i]>=65 && str[i]<=90)
    {
      str[i] = str[i] + 32;
    }
    else if(str[i]>=97 && str[i]<=122)
    {
      str[i] = str[i] - 32;
    }
  }
}
int main()
{ 
  struct msg Msg;
  int ch;
  int msgid = msgget(KEY,IPC_CREAT|0640);
  if (msgid<0)
  {
    perror("msgget");
    return 1;
  }
  while (1)
  {
    printf("Waiting for the message from client!\n");
    if ((msgrcv(msgid,&Msg,sizeof(struct msg)-sizeof(long),MSG_REQ_TYPE,0))<0)
    {
      perror("msgrcv");
      return 1;
    }
    printf("Message from client: %s\n",Msg.str);
    toggle(Msg.str);
    if ((msgsnd(msgid,&Msg,sizeof(struct msg)-sizeof(long),0))<0)
    {
      perror("msgsnd");
      return 1;
    }
    printf("Enter 0 to remove the message queue: ");
    scanf("%d",&ch);
    if (!ch)
    {
      kill(Msg.pid,9);
      msgctl(msgid,IPC_RMID,0);
      printf("Message queue removed!!\nClient Process Terminated!!!\n");
      break;
    }
  }

}
