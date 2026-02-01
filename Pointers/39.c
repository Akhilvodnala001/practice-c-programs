#include <stdio.h>
void search(int *p,int k,int n)
{
  int i;
  int flag = 0;
  for (i=0;i<n;i++)
  {
    if ((*(p+i)) == k)
    {
      flag = 1;
      printf("Found at index-%d",i);
    }
  }
  if (flag == 0)
  {
    printf("Not found!");
  }
  
}
int main()
{
  int n,i;
  printf("Enter the no.of elements: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements: \n");
  for (i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  int k;
  printf("Enter the element to be searched: ");
  scanf("%d",&k);
  search(arr,k,n);
  return 0;
  
}
