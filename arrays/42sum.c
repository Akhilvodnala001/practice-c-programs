#include <stdio.h>
int main()
{
int i,j,row,col,sr,sc;
printf("No.of rows: ");
scanf("%d",&row);
printf("No.of columns: ");
scanf("%d",&col);
int arr[row][col];
int sum[row+1][col+1];
printf("Enter the elements of the array: ");
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

for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    sum[i][j] = arr[i][j];
  }
}

//Sum of rows...
for (i=0;i<row;i++)
{
  sr = 0;
  for (j=0;j<col;j++)
  {
    sr = sr + arr[i][j];
  }
  sum[i][col] = sr;
}

//Sum of columns
for (i=0;i<col;i++)
{
  sc = 0;
  for (j=0;j<row;j++)
  {
    sc = sc + arr[j][i];
  }
  sum[row][i] = sc;
}

//Total sum
int total = 0;
for (i=0;i<col;i++)
{
  total = total + sum[i][col];
}
sum[row][col] = total;
printf("The matrix with the row and column sum is \n");
for (i=0;i<=row;i++)
{
  for (j=0;j<=col;j++)
  {
    printf("%d ",sum[i][j]);
  }
  printf("\n");
}


}
