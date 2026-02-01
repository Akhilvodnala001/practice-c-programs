#include <stdio.h>
int main()
{
int i,j,r1,c1,r2,c2,equal=1;
printf("Enter the rows of the matrix-1: ");
scanf("%d",&r1);
printf("Enter the columns of the matrix-1: ");
scanf("%d",&c1);
printf("Enter the rows of the matrix-1: ");
scanf("%d",&r2);
printf("Enter the columns of the matrix-1: ");
scanf("%d",&c2);

if (r1!=r2 || c1!=c2)
{
  printf("Rows or columns of matrices are not equal therefore matrices are not equal..Enter a valid input...");
}
else
{
  int a[r1][c1];
  int b[r2][c2];
  
  printf("Enter the elements for the matrix-1: \n");
  for (i=0;i<r1;i++)
  {
    for (j=0;j<c1;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  
  printf("Enter the elements for the matrix-2: \n");
  for (i=0;i<r2;i++)
  {
    for (j=0;j<c2;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  
  printf("matrix-1: \n");
  for (i=0;i<r1;i++)
  {
    for (j=0;j<c1;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  
  printf("matrix-2: \n");
  for (i=0;i<r2;i++)
  {
    for (j=0;j<c2;j++)
    {
      printf("%d ",b[i][j]);
    }
    printf("\n");
  }
  
  for (i=0;i<r1;i++)
  {
    for (j=0;j<c1;j++)
    {
      if (a[i][j] != b[i][j])
      {
        equal = 0;
        break;
      }  
    }
  }
  
  if (equal == 1)
  {
    printf("Matrix-1 is equal to matrix-2...");
  }
  else
  {
    printf("Matrix-1 is not equal to matrix-2...");
  }
}

}
