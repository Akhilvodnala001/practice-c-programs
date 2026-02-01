#include <stdio.h>
void maxmin(int *p1,int *min,int *max)
{
  int i;
  *min = *p1;
  *max = *p1;
  for (i=0;i<5;i++)
  {
    if (*p1 < *min)
    {
      *min = *p1; 
    }
    if (*p1 > *max)
    {
      *max = *p1;
    }
    p1++;
  }
  
}
int main()
{
  int max,min;
  int arr[5];
  int *ptr;
  ptr = arr;
  int i;
  for (i=0;i<5;i++)
  {
    scanf("%d",ptr);
    ptr++;
  }
  ptr = arr;
  maxmin(ptr,&min,&max);
  printf("Maximum is %d\n",max);
  printf("Minimun is %d\n",min);
  
  

}
