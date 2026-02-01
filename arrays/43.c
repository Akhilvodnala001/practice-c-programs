#include <stdio.h>
int main()
{
  int i,j,row,col;
  printf("Enter the no.of rows for the square matrix: ");
  scanf("%d",&row);
  printf("Enter the no.of columns for the square matrix: ");
  scanf("%d",&col);
  int arr[row][col];
  int t[col][row];
  printf("Enter the elements of the matrix: ");
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      printf("Row %d and Column %d: ",i,j);
      scanf("%d",&arr[i][j]);
    }
  }
  
  printf("Matrix is \n");
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  
  
  for (i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      t[j][i] = arr[i][j];
    }
  }
  
  printf("The transpose of the above matrix is \n");
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      printf("%d ",t[i][j]);
    }
    printf("\n");
  }
  int flag = 1;
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      if (t[i][j] != arr[i][j])
      {
        flag = 0;
        break;
      }
    }
  }
  
  if (flag == 0)
  {
    printf("Not symmetric");
  }
  else
  {
    printf("Symmetric");
  }
}
