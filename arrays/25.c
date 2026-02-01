#include <stdio.h>
int main()
{
int i,j,row,col,space;
printf("Enter the no.of rows: ");
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

printf("The Given array is \n");
for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    printf("%d ",a[i][j]);
  }
  printf("\n");
}

printf("\n");
for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    if (i>j)
    {
      printf("  ");
    }
    else
    {
      printf("%d ",a[i][j]);
    }
  }  
  printf("\n");
}
}
