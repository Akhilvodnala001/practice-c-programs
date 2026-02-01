#include <stdio.h>
int main()
{
  int row,col;
  printf("Enter the no.of row: ");
  scanf("%d",&row);
  printf("Enter the no.of col: ");
  scanf("%d",&col);
  int arr[row][col];
  int (*ptr)[col] = arr;
  int i,j;
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      scanf("%d",&(*ptr)[j]);
    }
    ptr++;
  }
  ptr = arr;
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      printf("%d ",(*ptr)[j]);
    }
    ptr++;
    printf("\n");
  }
}
