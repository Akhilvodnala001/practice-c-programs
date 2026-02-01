#include <stdio.h>
int main()
{
  int row;
  int col;
  printf("Enter the no.of rows: ");
  scanf("%d",&row);
  printf("Enter the no.of columns: ");
  scanf("%d",&col);
  
  int a[row][col];
  int b[row][col];
  int c[row][col];
  int i,j;
  
  printf("\nEnter the elements for the 1st matrix: \n");
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      printf("Enter the element for row %d and column %d: ",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  
  printf("\nEnter the elements for the 2nd matrix: \n");
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      printf("Enter the element for row %d and column %d: ",i,j);
      scanf("%d",&b[i][j]);
    }
  }
  
  printf("\n1st matrix: \n");
  for (i=0;i<row;i++)
  {
    printf("\n");
    for (j=0;j<col;j++)
    {
      printf("%d ",a[i][j]);
    }
  }
  
  printf("\n2nd matrix: \n");
  for (i=0;i<row;i++)
  {
    printf("\n");
    for (j=0;j<col;j++)
    {
      printf("%d ",b[i][j]);
    }
  }
  
  printf("\nThe resultant matrix of sum of 1st and 2nd matrices: \n");
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      c[i][j]=a[i][j]+b[i][j];
    }
  }
  
  for (i=0;i<row;i++)
  {
    printf("\n");
    for (j=0;j<col;j++)
    {
      printf("%d ",c[i][j]);
    }
  }
  

}
