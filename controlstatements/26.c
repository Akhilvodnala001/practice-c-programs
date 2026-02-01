#include <stdio.h>
int main()
{
int n;
printf("Enter the no of the elements in the array: ");
scanf("%d",&n);
char arr[n];
int i ;
for (i=0;i<n;i++)
{
  printf("Enter the element: ");
  scanf(" %c",&arr[i]);
}
int count = 0;
for (i=0;i<n;i++)
{
  if(arr[i]=='a' ||arr[i]=='e' ||arr[i]=='i' ||arr[i]=='o' ||arr[i]=='u' ||arr[i]=='A' ||arr[i]=='E' ||arr[i]=='I' ||arr[i]=='O' ||arr[i]=='U')
  {
    count++;
  }
}
printf("No.of vowels in the array is %d",count);

}

