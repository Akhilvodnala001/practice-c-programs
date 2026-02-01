#include <stdio.h>
int main()
{
int i,n,ecount=0,ocount=0;
printf("No.of elements in the array: ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the array: ");
for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}

for (i=0;i<n;i++)
{
  if (arr[i]%2==0)
  {
    ecount++;
  }
  else
  {
    ocount++;
  }
}
printf("No.of even numbers in the array is %d \n",ecount);
printf("No.of odd numbers in the array is %d \n",ocount);
}
