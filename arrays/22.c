#include <stdio.h>
int main()
{
  int i,j,sum=0,row,col;
  printf("Enter the no.of rows: ");
  scanf("%d",&row);
  printf("Enter the no.of columns: ");
  scanf("%d",&col);
  int a[row][col];
  if (row != col)
  {
    printf("Matrices other than square matrix don't have diagonals...");
  }
  else
  {
    for (i=0;i<row;i++)
    {
      for (j=0;j<col;j++)
      {
        printf("Enter the element for row %d and col %d: ",i,j);
        scanf("%d",&a[i][j]);
      }
    }
    
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
      for(j=0;j<col;j++)
      {
        if (i==j)
        {
          sum = sum + a[i][j];
        }
      }
    }
    printf("The sum of left diagonal elements is %d.",sum);
  }
}
