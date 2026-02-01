#include <stdio.h>
void cal(int x,int y,int *add,int *sub)
{
  *add = x + y;
  *sub = x - y;
}
int main()
{
  int a = 10;
  int b = 5;
  int sum,diff;
  cal(a,b,&sum,&diff);
  printf("Sum of a and b is %d",sum);
  printf("\nDiff b/w a and b is %d",diff);

}
