#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>
int main()
{
  int fds_ptc[2];
  int fds_ctp[2];
  if (pipe(fds_ptc)<0)
  {
    perror("pipe");
    return 1;
  }
  if (pipe(fds_ctp)<0)
  {
    perror("pipe");
    return 1;
  }
  pid_t pid = fork();
  if (pid < 0)
  {
    perror("fork");
    return 1;
  }
  if (pid == 0)
  {
    close(fds_ptc[1]);
    close(fds_ctp[0]);
    int N = 5;
    int arr[N];
    read(fds_ptc[0],arr,sizeof(arr));
    int i,j;
    printf("Array sent by parent: ");
    for (i=0;i<N;i++)
    {
      printf("%d ",arr[i]);
    }
    printf("Processing the array!!!\n");
    for (i=0;i<N;i++)
    {
      int min = i;
      for (j=i+1;j<N;j++)
      {
        if (arr[j]<arr[min])
        {
          min = j;
        }
      }
      if (min!=i)
      {
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
      }
    }
    write(fds_ctp[1],arr,sizeof(arr));
    exit(0);
  }
  close(fds_ptc[0]);
  close(fds_ctp[1]);
  int N = 5;
  int arr[N];
  int i;
  printf("Enter array elements: ");
  for (i=0;i<N;i++)
  {
    scanf("%d",&arr[i]);
  }
  if ((write(fds_ptc[1],arr,sizeof(arr)))<0)
  {
    perror("write");
    return 1;
  }
  int stat;
  wait(&stat);
  int ptr[N];
  if ((read(fds_ctp[0],ptr,sizeof(arr)))<0)
  {
    perror("read");
    return 1;
  }
  for (i=0;i<N;i++)
  {
    printf("%d ",ptr[i]);
  }
  
  
}
