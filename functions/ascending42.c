#include <stdio.h>
int ascending(int [],int,int,int);
int main()
{
int i,n,s,first,second;
printf("Enter the no.of elements in the array: ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the array: ");
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
first = 0;
second = 1;
s = ascending(arr,n,first,second);
if (s == 1)
{
  printf("The array is in ascending order...");
}
else
{
  printf("The array is not in ascending order...");
}
}

int ascending(int arr[],int n,int first,int second)
{
if (arr[first]<arr[second])
{
  first++;
  second++;
  ascending(arr,n,first,second);
}
else
{
  return 0;
}
if (arr[second] == arr[n-1] && arr[first] == arr[n-2])
{
  return 1;
}

}
