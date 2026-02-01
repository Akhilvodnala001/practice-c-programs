#include <stdio.h>
int main()
{
int i,j,row,col;
row = 3;
col = 3;
int arr[row][col];
int arr1[row*col];
printf("Enter the elements of the matrix: ");
for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
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

int k = 0;
for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    arr1[k] = arr[i][j];
    k++;
  }
}


printf("The matrix in the 1d array format is ");
for (k=0;k<row*col;k++)
{
  printf("%d ",arr1[k]);
}
}
