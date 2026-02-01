#include <stdio.h>
#include <stdlib.h>
#define row 3
#define col 3
int main()
{
  int *(*ptr)[col];
  ptr = (int *(*)[col]) calloc (row*col,sizeof(int *));
  int mat[row][col];
  int i,j;
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      *(*(ptr+i)+j) = &(mat[i][j]);
    }
  }
  
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      printf("%p  ",*(*(ptr+i)+j));
    }
    printf("\n");
  }
  
	
}
