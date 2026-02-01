#include <stdio.h>
int main()
{
int n;
printf("Enter the no.of elements in the array: ");
scanf("%d",&n);
int arr[n];
int i;
for (i=0;i<n;i++)
{
  printf("index %d: ",i);
  scanf("%d",&arr[i]);
}
for (i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}

}
