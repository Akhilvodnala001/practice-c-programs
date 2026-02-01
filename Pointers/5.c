#include <stdio.h>
int main()
{
  int a = 5;
  int i;
  int arr[a];
  int *ptr = arr;
  printf("Enter the elements of the array \n");
  while (i<5)
  {
    printf("Index-%d: ",i);
    scanf("%d",ptr);
    ptr++;
    i++;
  }
  //If you have want to print nth element in the array
  int n;
  printf("Enter the index of the element you want to print: ");
  scanf("%d",&n);
  ptr = arr;
  printf("%d\n",*(ptr+n));

}
