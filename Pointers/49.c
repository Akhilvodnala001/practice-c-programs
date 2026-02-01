#include <stdio.h>
#define size 5
void fun(int *arr)
{
  int n = 0;
  int i;
  for(i=0;i<size;i++)
  {
    n = n + arr[i];
  }
  printf("Sum of elements of the array is %d",n);
}
int main()
{
  int arr[size];
  int i;
  int *ptr = arr;
  void (*fptr)(int *) = fun;
  printf("Enter the array elements: ");
  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  (*fptr)(ptr);
}
