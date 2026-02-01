#include <stdio.h>
int main()
{
int i,j,row,col,sum=0;
printf("Enter the no.of rows: ");
scanf("%d",&row);
printf("Enter the no.of columns: ");
scanf("%d",&col);

int a[row][col];

printf("Enter the elements: ");
for(i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    scanf("%d",&a[i][j]);
  }
}

printf("Matrix is \n");
for(i=0;i<row;i++)
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
    if (i<=j)
    {
      sum = sum + a[i][j];
    }
  }
}
printf("Sum of upper triangular matrix elements is %d..",sum);
}
