#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>
int main()
{
  int fd;
  struct stat s;
  fd = open("stat.c",O_RDONLY);
  if (fd<0)
  {
    perror("Error opening file!\n");
    exit(1);
  }
  if (fstat(fd,&s) == -1)
  {
    perror("fstat error!\n");
    exit(1);
  }
  close(fd);
  printf("Inode number: %ld\n",s.st_ino);
  printf("Inode blocks: %ld\n",s.st_blocks);
  printf("Inode size: %ld\n",s.st_size);
  printf("Inode mode: %o\n",s.st_mode);
  printf("Inode uid: %d\n",s.st_uid);
  printf("Inode gid: %d\n",s.st_gid);
  printf("Last accessed time: %s\n",ctime(&s.st_atime));
  printf("Last modified time: %s\n",ctime(&s.st_mtime));
  printf("Last change time: %s\n",ctime(&s.st_ctime));
} 
