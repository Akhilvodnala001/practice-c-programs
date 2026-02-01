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

for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    printf("Enter the element for row %d and column %d: ",i,j);
    scanf("%d",&arr[i][j]);
  }
}

for (i=0;i<row;i++)
{
  printf("\n");
  for (j=0;j<col;j++)
  {
    printf("%d ",arr[i][j]);
  }
}

for (i=0;i<row;i++)
{
  sum = 0;
  for (j=0;j<col;j++)
  {
    sum = sum + arr[i][j];
  }
  printf("\nSum of elements in %d indexed row is %d\n",i,sum);
}
}
