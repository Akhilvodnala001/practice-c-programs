#include <stdio.h>
int main()
{
int i,j,n,row,col;
printf("Enter the size of the 1-D Array: ");
scanf("%d",&n);
printf("Enter the rows in the 2-D Array: ");
scanf("%d",&row);
printf("Enter the columns in the 2-D Array: ");
scanf("%d",&col);
int a[n];
int b[row][col];
printf("Enter the elements of the 1-D array: ");
for (i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}

printf("1-D Array: \n");
for (i=0;i<n;i++)
{
  printf("%d ",a[i]);
}

for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    b[i][j] = a[i*col+j];
  }
}

printf("The 2D Array is \n");
for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    printf("%d ",b[i][j]);
  }
  printf("\n");
}


}
