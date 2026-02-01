#include <stdio.h>
int main()
{
int n;
int m;
printf("Enter the no.of elements in array-1: ");
scanf("%d",&n);
int arr[n];
int i;

printf("Enter the no.of till %d: ",n);
for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}

for (i=0;i<n;i++)
{
  if ( arr[i] != i+1 )
  {
    printf("Missing number is %d\n",i+1);
    break;
  }
}



}
