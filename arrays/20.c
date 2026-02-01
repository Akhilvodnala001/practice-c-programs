#include <stdio.h>
int main()
{
int i,j,row,col;
printf("Enter the rows: ");
scanf("%d",&row);
printf("Enter the no.of columns: ");
scanf("%d",&col);
int a[row][col];

printf("Enter the elements: \n");
for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    scanf("%d",&a[i][j]);
  }

}
printf("Original array: \n");
for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    printf("%d ",a[i][j]);
  }
  printf("\n");
}

printf("\nTranspose of the above array: \n");
for (i=0;i<col;i++)
{
  for (j=0;j<row;j++)
  {
    printf("%d ",a[j][i]);
  }
  printf("\n");
}
}
