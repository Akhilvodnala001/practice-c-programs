#include <stdio.h>
#define row1 3
#define col1 3
#define row2 3
#define col2 2
int fun(int a,int b)
{
  return a*b;
}
int main()
{
  int arr1[row1][col1];
  int (*ptr1)[col1] = arr1;
  
  int arr2[row2][col2];
  int (*ptr2)[col2] = arr2;
  
  int mul[row1][col2];
  int (*mptr)[col2] = mul;
  
  int i,j,k;
  
  printf("Enter Matrix-1:\n");
  for (i=0;i<row1;i++)
  {
    for (j=0;j<col1;j++)
    {
      scanf("%d",*(ptr1+i)+j);
    } 
  }
  
  printf("Enter Matrix-2:\n");
  for (i=0;i<row2;i++)
  {
    for(j=0;j<col2;j++)
    {
      scanf("%d",*(ptr2+i)+j);
    }
  }
  
  printf("Matrix-1:\n");
  for (i=0;i<row1;i++)
  {
    for (j=0;j<col1;j++)
    {
      printf("%d ",*(*(ptr1+i)+j));
    }
    printf("\n");
  }
  
  printf("Matrix-2:\n");
  for (i=0;i<row2;i++)
  {
    for(j=0;j<col2;j++)
    {
      printf("%d ",*(*(ptr2+i)+j));
    }
    printf("\n");
  }
  int sum;
  for (i=0;i<row1;i++)
  {
    for(j=0;j<col2;j++)
    {
      *(*(mptr+i)+j) = 0;
      for (k=0;k<col1;k++)
      {
        *(*(mptr+i)+j) = *(*(mptr+i)+j) + fun((*(*(ptr1+i)+k)),(*(*(ptr2+k)+j)));
      }
    }
  }
  
  printf("The resultant matrix is \n");
  for (i=0;i<row1;i++)
  {
    for (j=0;j<col2;j++)
    {
      printf("%d ",*(*(mptr+i)+j));
    }
    printf("\n");
    
  }
}
