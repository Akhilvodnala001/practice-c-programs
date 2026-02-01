#include <stdio.h>
int main()
{
int i,j,row,col;
printf("Enter the rows in the array: ");
scanf("%d",&row);
printf("Enter the columns in the array: ");
scanf("%d",&col);

int a[row][col];
printf("Enter the elements of the matrix: \n");
for (i=0;i<row;i++)
{
  printf("row-%d: ",i+1);
  for (j=0;j<col;j++)
  {
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
}
