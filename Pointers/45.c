#include <stdio.h>
#include <stdlib.h>
#define row 3
#define col 3
int main()
{
  int (*ptr)[col];
  int i,j;
  ptr = (int (*)[col])malloc(row*col*sizeof(int));
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      scanf("%d",*(ptr+i)+j);
    }
  }
  for(i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      printf("%d ",*(*(ptr+i)+j));
    }
    printf("\n");
  }
}


