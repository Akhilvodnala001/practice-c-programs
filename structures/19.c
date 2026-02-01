#include <stdio.h>
union data
{
  int x;
  float y;
};
int func(union data *p)
{
  int n;
  printf("Enter your choice of input: (int-1,float-0) ");
  scanf("%d",&n);
  if (n == 1)
  {
    printf("Enter the number of type int: ");
    scanf("%d",&p->x);
  }
  else if (n == 0)
  {
    printf("Enter the number of type float: ");
    scanf("%f",&p->y);
  }
  else
  {
    printf("Invalid input!\n");
    return 0;
  }
  
  if (n == 1)
  {
    printf("Entered number is %d\n",p->x);
  }
  else
  {
    printf("Entered number is %0.1f \n",p->y);
  }
}
int main()
{
  union data number;
  func(&number);
  return 0;
}
