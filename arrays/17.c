#include <stdio.h>
int main()
{
int i,j,row,col;
printf("No.of rows: ");
scanf("%d",&row);
printf("No.of columns: ");
scanf("%d",&col);

int a[row][col];
int b[row][col];
int sum[row][col];

printf("Array-1 elements: \n");
for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    scanf("%d",&a[i][j]);
  }
}

printf("Array-2 elements: \n");
for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    scanf("%d",&b[i][j]);
  }
}
printf("The sum array of array-1 and array-2 is \n");
for (i=0;i<row;i++)
{
  for(j=0;j<col;j++)
  {
    sum[i][j] = a[i][j]+b[i][j];
    printf("%d ",sum[i][j]);
  }
  printf("\n");
}
/*printf("The sum array of array-1 and array-2 is \n");
for (i=0;i<row;i++)
{
  for(j=0;j<col;j++)
  {
    printf("%d ",sum[i][j]);
  }
  printf("\n");
}*/
}
