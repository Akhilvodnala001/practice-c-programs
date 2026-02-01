#include <stdio.h>
int main()
{
int i,num,n;
printf("Enter the size of the array: ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the array: ");
for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
printf("Enter the element to be searched: ");
scanf("%d",&num);
int count  = 0;
for (i=0;i<n;i++)
{
  if (arr[i] == num)
  {
    count = 1;
    break;
  }
}
if (count == 1)
{
  printf("%d is present in the array..",num);
}
else
{
  printf("%d is not present in the array..",num);
}
}
