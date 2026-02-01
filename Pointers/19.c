#include <stdio.h>
void fun(int arr[])
{
  int i;
  for (i=0;i<5;i++)
  {
    arr[i]++;
  }
}
int main()
{
  int arr[] = {1,2,3,4,5};
  fun(arr);
  int i;
  for (i=0;i<5;i++)
  {
    printf("%d ",arr[i]);
  }

}
