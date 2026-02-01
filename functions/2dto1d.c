#include <stdio.h>
int oned(int [],int,int);
int main()
{
  int i,j,row,col;
  printf("Enter the no.of rows: ");
  scanf("%d",&row);
  printf("Enter the no.of columns: ");
  scanf("%d",&col);
  int arr[row][col];
  printf("Enter the elements: ");
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  int a[row*col];
  int k = 0;
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      a[k] = arr[i][j];
      k++;
    }
  }
  printf("The 1d form of the 2d array is \n");
  for (i=0;i<row*col;i++)
  {
    printf("%d ",a[i]);
  }
}
