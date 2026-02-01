#include <stdio.h>
#include <stdlib.h>
int zerosum(int arr[],int n)
{
  if (n<2)
  {
    return 0;
  }
  int min_sum  = arr[0] + arr[1];
  int min_index1 = 0;
  int min_index2 = 1;
  int i,j;
  for (i=0;i<n-1;i++)
  {
    for (j=i+1;j<n;j++)
    {
      int newsum = arr[i] + arr[j];
      if (abs(newsum) < abs(min_sum))
      {
        min_sum = newsum;
        min_index1 = i;
        min_index2 = j;
      }
    }
  }
  printf("\nThe elements whose sum is closest to zero is %d and %d",arr[min_index1],arr[min_index2]);
}
int main()
{
int i,n,smallest,secondsmallest;
printf("Enter the no.of elements in the array: ");
scanf("%d",&n);
int a[n];
for (i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}

printf("The array you entered is ");
for (i=0;i<n;i++)
{
  printf("%d ",a[i]);
}
zerosum(a,n);
return 0;

}
