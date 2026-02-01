#include <stdio.h>
int main()
{
int i,j,k,n;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
int a[n];
printf("Enter the elements of the array: ");
for (i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
printf("Enter the value of k(kth smallest element): ");
scanf("%d",&k);

for (i=0;i<n;i++)
{
  for (j=i+1;j<n;j++)
  {
    if (a[i] > a[j])
    {
      int temp = a[i];
      a[i] = a[j];
      a[j] = temp;
    }
  }
}
if (k<=n)
{
  printf("%dth smallest element in the array is %d",k,a[k-1]);
}
else
{
  printf("Invalid input...Enter a value between 1 to %d",n);
}
}
