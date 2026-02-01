#include <stdio.h>
int main()
{
int i,j,row,col,sum=0;
printf("Enter the no.of rows: ");
scanf("%d",&row);
printf("Enter the no.of columns: ");
scanf("%d",&col);
int a[row][col];
for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    scanf("%d",&a[i][j]);
  }
}

printf("Given array is \n");
for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    printf("%d ",a[i][j]);
  }
  printf("\n");
}


for (i=0;i<row;i++)
{
  for (j=0;j<=i;j++)
  {
    printf("%d ",a[i][j]);
  }
  printf("\n");
}

}
