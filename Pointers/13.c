#include <stdio.h>
int main()
{
  int a,row,col,i,j;
  printf("No.of rows: ");
  scanf("%d",&row);
  printf("No.of columns: ");
  scanf("%d",&col);
  int arr[row][col];
  int *ptr = &arr[0][0];
  for (i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      printf("%p  %d    ",ptr,*(ptr++));
    }
    printf("\n");
  }
}
