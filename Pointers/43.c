#include <stdio.h>
void sort(int *arr,int n)
{
  int *start = arr;
  int *end = arr+n-1;
  while (start<end)
  {
    int temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}
int main()
{
  int i,n;
  printf("No.of elements: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements: ");
  for (i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  sort(arr,n);
  for (i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }

}
