#include <stdio.h>
int main()
{
int i,num,x;
printf("Enter the numbers of elements in the array: ");
scanf("%d",&num);
int arr[num];
printf("Enter the elements between 0 to 9: ");
for (i=0;i<num;i++)
{
  scanf("%d",&arr[i]);
}

printf("Elements in the array and their ascii values: \n");
for (i=0;i<num;i++)
{
  int x = arr[i];
  char ch = x + '0';
  printf("%d = %d\n",arr[i],ch);
}

}
