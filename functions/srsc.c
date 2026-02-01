#include <stdio.h>
int srow(int [],int,int);
int scol(int [],int,int);
int main()
{
int row,col,i,j;
printf("Enter the no.of rows: ");
scanf("%d",&row);
printf("Enter the no.of columns: ");
scanf("%d",&col);
int arr[row][col];
printf("Enter the elements of the matrix: ");
for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    scanf("%d",&arr[i][j]);
  }
}

printf("The matrix is \n");
for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    printf("%d ",arr[i][j]);
  }
  printf("\n");
}
srow(arr,row,col);
scol(arr,row,col);
printf("The matrix is \n");
for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    printf("%d ",arr[i][j]);
  }
  printf("\n");
}


}

int srow(int arr[],int row,int col)
{
  int i,j,sr = 0;
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      sr = sr + arr[i][j];
    } 
    arr[i][col] = sr;
  }
}

int scol(int arr[],int row,int col)
{
  int i,j,sc=0;
  for (i=0;i<col;i++)
  {
    for (j=0;j<row;j++)
    {
      sc = sc + arr[j][i];
    }
    arr[col][i] = sc;
  }
}


