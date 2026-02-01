#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>
#define KEY 199440
#define MSG_SRV_TYPE 1
struct msg
{
  long mtype;
  pid_t pid;
  char str[100];
};
int main()
{
  struct msg Msg;
  int msgid = msgget(KEY,0);
  if (msgid<0)
  {
    perror("msgget");
    return 1;
  }
  Msg.mtype = MSG_SRV_TYPE;
  Msg.pid = getpid();
  while (1)
  {
    printf("Enter message for the server: ");
    fgets(Msg.str,sizeof(Msg.str),stdin);
    Msg.str[strcspn(Msg.str,"\n")] = '\0';
    if ((msgsnd(msgid,&Msg,sizeof(struct msg),0))<0)
    {
      perror("msgsnd");
      return 1;
    }
    if ((msgrcv(msgid,&Msg,sizeof(struct msg),MSG_SRV_TYPE,0))<0)
    {
      perror("msgrcv");
      return 1;
    }
    printf("Response from server: %s\n",Msg.str);
  }
}
