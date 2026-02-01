#include <stdio.h>
int main()
{
int i,j,row,col,count = 0;
printf("Enter the no.of rows: ");
scanf("%d",&row);
printf("Enter the no.of columns: ");
scanf("%d",&col);

int a[row][col];
int identity = 0;

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

for(i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    if ((i==j)&&(a[i][j]==1)||((i>j||i<j)&&(a[i][j]==0)))
    {
      identity = 1;
    }
    else
    {
      identity = 0;
      count++;
    }
  }
}

if (identity == 1 && count == 0 )
{
  printf("Identity matrix...");
}
else
{
  printf("Not an identity matrix...");
}

}
