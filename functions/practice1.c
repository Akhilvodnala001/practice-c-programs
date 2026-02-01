#include <stdio.h>
int avg(int [],int);
int main()
{
int n,i; 
printf("Enter the no.of elements: ");
scanf("%d",&n);
int arr[n];
printf("Enter the no.of elements in the array: ");
for (i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("The average of the elements in the array is %d",avg(arr,n));
}

int avg(int arr[],int n)
{
int i;
int sum = 0;
for (i=0;i<n;i++)
{
sum = sum + arr[i]; 
}
return sum/n;
}
