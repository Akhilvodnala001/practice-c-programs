#include <stdio.h>
int main()
{
  int row;
  int col;
  printf("Enter the no.of rows in the matrix: ");
  scanf("%d",&row);
  printf("Enter the no.of columns in the matrix: ");
  scanf("%d",&col);
  int arr[row][col];
  int i,j,sum=0;

  for(i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      printf("Enter the element at row %d and column %d:",i,j);
      scanf("%d",&arr[i][j]);
    }
  }
  
  printf("\nThe matrix that you have given is \n");
  for(i=0;i<row;i++)
  {
    printf("\n");
    for (j=0;j<col;j++)
    {
      printf("%d ",arr[i][j]);
    }
  }
  
  for(i=0;i<row;i++)
  {
    sum = 0;
    for (j=0;j<col;j++)
    {
      sum = sum + arr[j][i];
    }
    printf("\nsum of elements in %d indexed column is = %d",i,sum);
  }
}
