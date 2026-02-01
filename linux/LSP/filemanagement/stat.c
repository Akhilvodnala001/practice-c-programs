#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
int main()
{ 
  struct stat buff;
  if (stat("stat.c",&buff) == -1)
  {
    perror("stat error!");
    exit(1);
  }
  printf("Inode Number: %ld\n",buff.st_ino);
  printf("Inode size: %ld\n",buff.st_size);
  printf("Inode blocks: %ld\n",buff.st_blocks);
  printf("Mode: %o\n",buff.st_mode);
  printf("UID: %d\n",buff.st_uid);
  printf("GID: %d\n",buff.st_gid);
  printf("Last accessed time: %ld\n",buff.st_atime);
  printf("Last modified time: %ld\n",buff.st_mtime);
  printf("Last change time: %ld\n",buff.st_ctime);
}
