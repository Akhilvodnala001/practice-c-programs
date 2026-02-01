#include <stdio.h>

//With pointer subscripting
void reverse(int *arr,int n)
{
  int i;
  for (i=0;i<n/2;i++)
  {
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
  }
  
}

//Without subsripting
/*void reverse(int arr[],int n)
{ 
  int *start = arr;
  int *end = arr + n - 1;
  while (start<end)
  {
    int temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  } 
}*/

int main()
{
  int n,i;
  printf("Enter the no.of elements in the array: ");
  scanf("%d",&n);
  int arr[n];
  for (i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  reverse(arr,n);
  for (i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }

}
