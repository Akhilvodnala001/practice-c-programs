#include <stdio.h>
int reverse(int arr[],int n)
{
int start = 0,end = n-1;
while (start<end)
{
int temp = arr[start];
arr[start] = arr[end];
arr[end] = temp;
start++;
end--;
}
}

int main(){
int n = 10,i;
printf("Enter the no.of elements of the array: ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the array: ");
for (i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
reverse(arr,n);
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
}
