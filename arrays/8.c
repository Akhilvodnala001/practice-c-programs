#include <stdio.h>
int main()
{
int i,j,count;
int n=10;
int a[n];
int counted[n];
printf("Enter the elements of the array: ");
for (i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}

for (i=0;i<n;i++)
{
  counted[i] = 0;
}

for (i=0;i<n;i++)
{
  int count = 1;
  if (counted[i] == 0)
  {
    for (j=i+1;j<n;j++)
    {
      if (a[i] == a[j])
      {
        count++;
        counted[j]=-1;
      }
    }
    counted[i]=count;
  }
}

for (i=0;i<n;i++)
{
  if (counted[i] != -1)
  {
    printf("The frequency of %d is %d \n",a[i],counted[i]);
  }
}

}
