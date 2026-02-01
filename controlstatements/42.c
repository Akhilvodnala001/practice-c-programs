#include <stdio.h>
int main()
{
int n;
printf("Enter the no of elements in the array: ");
scanf("%d",&n);
int arr[n];
int i;
int j;
int k;
printf("Enter the elements of the array: ");
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}

for(i=0;i<n;i++)
{
  for (j=i+1;j<n;j++)
  {
    if (arr[i]==arr[j])
    {
      for(k=j;k<n-1;k++)
      {
        arr[k]=arr[k+1];
      }
      n--;
      j--;
    }
  }
}

printf("New array after removing the duplicate elements is ");
for(i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}
return 0;

}
