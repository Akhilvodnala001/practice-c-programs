#include <stdio.h>
int main()
{
  int i,n=10;
  int a[n];
  for (i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int smallest = a[0];
  int secondsmallest = a[1];
  for (i=1;i<n;i++)
  {
    if (smallest>a[i])
    {
      smallest = a[i];
      int temp = a[0];
      a[0] = smallest;
      a[i] = temp;
    }
  }
  
  for (i=2;i<n;i++)
  {
    if (secondsmallest > a[i])
    {
      secondsmallest = a[i];
    }
  }
  
  printf("Second smallest is %d",secondsmallest);
  
  
}
