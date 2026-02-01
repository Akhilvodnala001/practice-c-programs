#include <stdio.h>
int main()
{
int i,j,r1,c1,r2,c2,r3,c3,k,sum;
printf("Enter the no.of rows in matrix-1: ");
scanf("%d",&r1);
printf("Enter the no.of columns in matrix-1: ");
scanf("%d",&c1);
printf("Enter the no.of rows in matrix-2: ");
scanf("%d",&r2);
printf("Enter the no.of columns in matrix-2: ");
scanf("%d",&c2);
int a[r1][c1];
int b[r2][c2];

printf("Enter the elements of array-1: ");
for (i=0;i<r1;i++)
{
  for(j=0;j<c1;j++)
  {
    scanf("%d",&a[i][j]);
  }
}
printf("Enter the elements of array-2: ");
for (i=0;i<r2;i++)
{
  for(j=0;j<c2;j++)
  {
    scanf("%d",&b[i][j]);
  }
}

r3=r1;
c3=c2;
int mul[r3][c3];

if (c1!=r2)
{
  printf("Condition not satisfied...To multiply 2 matrices,the columns of 1st matrix should be equal to the rows of 2nd matrix...");
}
else
{
  for (i=0;i<r1;i++)
  {
    for (j=0;j<c2;j++)
    {
      sum = 0;
      for (k=0;k<c1;k++)
      {
        sum = sum + a[i][k]*b[k][j];
      }
      mul[i][j] = sum;
    }
  }
for (i=0;i<r3;i++)
{
  for (j=0;j<c3;j++)
  {
    printf("%d ",mul[i][j]);
  }
  printf("\n");
}
}




}
