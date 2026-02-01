#include <stdio.h>
int main()
{
int row;
int col;
printf("Enter the no.of rows in the matrices: ");
scanf("%d",&row);
printf("Enter the no.of columns in the matrices: ");
scanf("%d",&col);

int a[row][col], b[row][col];
int i,j,sub=0;

printf("Enter the elements for the 1st matrix: ");
for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    printf("row %d and column %d: ",i,j);
    scanf("%d",&a[i][j]);
  }
}

printf("Enter the elements for the 2nd matrix: ");
for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    printf("row %d and column %d: ",i,j);
    scanf("%d", &b[i][j]);
  }
}

printf("The resultant matrix of subtraction of 1st and 2nd matrixes is ");
for (i=0;i<row;i++)
{
  sub = 0;
  printf("\n");
  for (j=0;j<col;j++)
  {
    sub = a[i][j] - b[i][j];
    printf("%d ",sub);
  }
}
}
