#include <stdio.h>
void swap(int *a,int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main()
{
  int a = 10;
  int b = 20;
  printf("Before function calling:\na = %d b = %d\n",a,b);
  swap(&a,&b);
  printf("After function calling:\na = %d b = %d",a,b);

}
