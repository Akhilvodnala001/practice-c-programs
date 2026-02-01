#include <stdio.h>
int main()
{
int i,j,row,col,left,right,top,bottom;
printf("Rows: ");
scanf("%d",&row);
printf("Columns: ");
scanf("%d",&col);
left = 0;
right = col-1;
top = 0;
bottom = row-1;
int arr[row][col];
printf("Enter the elements: ");
while(top<=bottom && left<=right)
{
  for (i = left;i<=right;i++)
  {
    scanf("%d",&arr[top][i]);
  }
  top++;
  for (i = top;i<=bottom;i++)
  {
    scanf("%d",&arr[i][right]);
  }
  right--;
  if (top<=bottom)
  {
    for (i=right;i>=left;i--)
    {
      scanf("%d",&arr[bottom][i]);
    }
    bottom--;
  }
  if (left<=right)
  {
    for (i=bottom;i>=top;i--)
    {
      scanf("%d",&arr[i][left]);
    }
    left++;
  }
}

printf("The spiral matrix is \n");
for (i=0;i<row;i++)
{
  for (j=0;j<col;j++)
  {
    printf("%d ",arr[i][j]);
  }
  printf("\n");
}

}
