#include <stdio.h>
int main()
{
  int i,j,row,col,sum=0;
  printf("Enter the no.of rows: ");
  scanf("%d",&row);
  printf("Enter the no.of columns: ");
  scanf("%d",&col);
  if (row == col)
  {
    int a[row][col];
    for (i=0;i<row;i++)
    {
      for (j=0;j<col;j++)
      {
        printf("Enter the element for index row %d and column %d: ",i,j);
        scanf("%d",&a[i][j]);
      }
    }
    
    printf("Given matrix is \n");
    for (i=0;i<row;i++)
    {
      for (j=0;j<col;j++)
      {
        printf("%d ",a[i][j]);
      }
      printf("\n");
    }

    for (i=0;i<row;i++)
    {
      for (j=0;j<col;j++)
      {
        if ((i+j)==row-1)
        {
          sum = sum+a[i][j];
        }
      }
    }
    printf("The sum of right diagonals in the given matrix is: %d",sum);
  }
  else
  {
    printf("Matrices other than square matrix don't have diagonals...");
  }
}
