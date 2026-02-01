#include <stdio.h>
#include <stdlib.h>
#define row 3
#define col 3
#define layer 2
int main()
{
  int (*ptr)[row][col];
  int i,j,k;
  ptr = (int (*)[row][col])calloc(layer*row*col,sizeof(int));
  for(i=0;i<layer;i++)
  {
    printf("Layer-%d:\n",i+1);
    for(j=0;j<row;j++)
    {
      for (k=0;k<col;k++)
      {
        scanf("%d",*(*(ptr+i)+j)+k);
      }
    }
  }
  
  for (i=0;i<layer;i++)
  {
    printf("Layer-%d:\n",i+1);
    for (j=0;j<row;j++)
    {
      for (k=0;k<col;k++)
      {
        printf("%d ",*(*(*(ptr+i)+j)+k));
      }
      printf("\n");
    }
  }
}

