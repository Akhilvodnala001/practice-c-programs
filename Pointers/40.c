#include <stdio.h>
#define row 3
#define col 3
int main()
{
  int arr1[3][3];
  int (*ptr1)[3] = arr1;
  
  int arr2[3][3];
  int (*ptr2)[3] = arr2;
  
  int sum[3][3];
  int (*sptr)[3] = sum;
  
  int i,j;
  
  printf("Matrix-1:\n");
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      scanf("%d",*(ptr1+i)+j);
    }
  }
  
  printf("Matrix-2:\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",*(ptr2+i)+j);
    }
  }
  
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      *(*(sptr+i)+j) = *(*(ptr1+i)+j) + *(*(ptr2+i)+j);
    }
  }
  
  printf("Sum matrix is \n");
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      printf("%d ",*(*(sptr+i)+j));
    }
    printf("\n");
  }
}
