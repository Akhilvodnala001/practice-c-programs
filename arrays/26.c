#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i,j,row,col,det;
  printf("Enter the no.of rows in the matrix: ");
  scanf("%d",&row);
  printf("Enter the no.of columns in the matrix: ");
  scanf("%d",&col);
  
  if (row != 3 || col != 3)
  {
    printf("Invalid input...");
  }
  else
  {
    int a[row][col];

    printf("Enter the elements of the matrix: \n");
    for (i=0;i<row;i++)
    {
      for (j=0;j<col;j++)
      {
        printf("Index [%d][%d]",i,j);
        scanf("%d",&a[i][j]);
      }
    }

    printf("The matrix you have entered is \n");
    for (i=0;i<row;i++)
    {
      for (j=0;j<col;j++)
      {
        printf("%d ",a[i][j]);
      }
      printf("\n");
    }

    det = a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1])
            - a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0])
            + a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);
    printf("The determinant of the above matrix is %d",det);
  }
}
