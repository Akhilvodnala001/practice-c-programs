#include <stdio.h>
int main()
{
int i,j,n;
printf("Enter the no.of elements in the array: ");
scanf("%d",&n);
int arr[n];
int evencount=0,oddcount=0;
for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}

int even[n];
int odd[n];
for (i=0;i<n;i++)
{
  if (arr[i]%2==0)
  {
    even[evencount] = arr[i];
    evencount++;
  }
}

for (i=0;i<n;i++)
{
  if (arr[i]%2==1)
  {
    odd[oddcount] = arr[i];
    oddcount++;
  }
}



printf("Even elements: ");
for (i=0;i<evencount;i++)
{
  printf("%d ",even[i]);
}

printf("\nOdd Elements: ");
for (i=0;i<oddcount;i++)
{
  printf("%d ",odd[i]);  
}
}
