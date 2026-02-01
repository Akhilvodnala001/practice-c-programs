#include <stdio.h>
int main()
{
int r1,c1,r2,c2,r3,c3;
printf("Rows of 1st matrix: ");
scanf("%d", &r1);
printf("Columns of 1st matrix: ");
scanf("%d", &c1);
printf("Rows of 2nd matrix: ");
scanf("%d", &r2);
printf("Columns of 2nd matrix: ");
scanf("%d", &c2);

if (r1*c1 > r2*c2)
{
  r3=r2;
  c3=c2;
}
else
{
  r3=r1;
  c3=c1;
}

int a[r1][c1], b[r2][c2], c[r3][c3];
int i,j,k,sum;

printf("Enter the elements for 1st matrix: ");
for (i=0;i<r1;i++)
{
  for (j=0;j<c1;j++)
  {
    printf("row %d and column %d: ",i,j);
    scanf("%d",&a[i][j]);
  }
}

printf("Enter the elements for 2nd matrix: ");
for (i=0;i<r2;i++)
{
  for (j=0;j<c2;j++)
  {
    printf("row %d and column %d: ",i,j);
    scanf("%d",&b[i][j]);
  }
}

printf("1st matrix: ");
for (i=0;i<r1;i++)
{
  printf("\n");
  for (j=0;j<c1;j++)
  {
    printf("%d ",a[i][j]);
  }
}

printf("\n2nd matrix: ");
for (i=0;i<r2;i++)
{
  printf("\n");
  for (j=0;j<c2;j++)
  {
    printf("%d ",b[i][j]);
  }
}

for (i=0;i<r3;i++)
{
  for (j=0;j<c3;j++)
  { 
    sum = 0;
    for (k=0;k<r3;k++)
    {
      sum = sum + a[i][k] + b[k][j];
      c[i][j] = sum;
    }
  }
}

printf("\nThe matrix multiplication is \n");
for (i=0;i<r3;i++)
{
  printf("\n");
  for (j=0;j<c3;j++)
  {
    printf("%d ",c[i][j]);
  }
}
}
