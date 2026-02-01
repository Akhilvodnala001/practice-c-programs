#include <stdio.h>
int main()
{
int i,j,k,n,row,col,left,right,top,bottom;
printf("Enter the value of n: ");
scanf("%d",&n);
row = col = n;
left = 0;
right = n-1;
top = 0;
bottom = n-1;
j = 0;
int arr[n][n];
while (top<=bottom && left<=right)
{
  for (i = left;i<=right;i++)
  {
    j++;
    arr[top][i] = j;
  }
  top++;
  for (i = top;i<=bottom;i++)
  {
    j++;
    arr[i][right] = j;
  }
  right--;
  if (top<=bottom)
  {
    for (i = right;i>=left;i--)
    {
      j++;
      arr[bottom][i] = j;
    }
    bottom--;
  }
  if (left<=right)
  {
    for (i = bottom;i>=top;i--)
    {
      j++;
      arr[i][left] = j;
    }
    left++;
  }
}

for (i=0;i<row;i++)
{
  for (k=0;k<col;k++)
  {
    printf("%d ",arr[i][k]);
  }
  printf("\n");
}

}
