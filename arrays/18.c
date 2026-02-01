#include <stdio.h>
int main()
{
int i,j,row,col;
printf("Enter the no.of rows: ");
scanf("%d",&row);
printf("Enter the no.of columns: ");
scanf("%d",&col);
int a[row][col];
int b[row][col];
int sub[row][col];

printf("Enter the elements of the array-1: ");
for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    scanf("%d",&a[i][j]);
  }
}

printf("Enter the elements of the array-2: ");
for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    scanf("%d",&b[i][j]);
  }
}

for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    sub[i][j] = a[i][j]-b[i][j];
    printf("%d ",sub[i][j]);
  }
  printf("\n");
}



}
