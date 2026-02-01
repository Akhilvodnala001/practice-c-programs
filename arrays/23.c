#include <stdio.h>
int main()
{
  int i,j,row,col;
  printf("Enter the no.of rows: ");
  scanf("%d",&row);
  printf("Enter the no.of columns: ");
  scanf("%d",&col);

  int a[row][col];
  printf("Enter the elements of the array: \n");
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  
  printf("The array is \n");
  for (i=0;i<row;i++)
  {
    for (j=0;j<col;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  
  int sr,sc;
  
  for (i=0;i<row;i++)
  {
    sr=sc=0;
    for (j=0;j<col;j++)
    {
      sr = sr+a[i][j];
      sc = sc+a[j][i];
    }
    printf("The sum of elements in row-%d is %d\n",i+1,sr);
    printf("The sum of elements in column-%d is %d\n",i+1,sc);
  }
}
