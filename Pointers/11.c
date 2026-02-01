#include <stdio.h>
int main()
{
  int a = 10;
  int arr[] = {1,2,3,4,5};
  int *p1;
  int (*p2)[5];
  p1 = &a;
  p2 = &arr;
  printf("Pointer to an integer: %p  %d\n",p1,*p1);
  int i;
  printf("Pointer to an array of integers: \n");
  for (i=0;i<5;i++)
  {
    printf("%p  %d\n",p2[i],(*p2)[i]);
  }
  
  

}
