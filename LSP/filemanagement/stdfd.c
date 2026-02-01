#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main()
{
  int fd;
  char str1[20];
  read(0,str1,20);
  printf("USING PRINTF: %s\n",str1);
  write(1,"USING Write: ",strlen("USING Write: "));
  write(1,str1,strlen(str1));
}
