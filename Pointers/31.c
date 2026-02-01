#include <stdio.h>
int main()
{
  int n;
  printf("Enter a number to find the factorial: ");
  scanf("%d",&n);
  int fact = 1;
  int *ptr = &n;
  if ((*ptr)==0)
  {
    printf("Factorial is %d",fact);
  }
  else
  {
    while ((*ptr)!=0)
    {
      fact = (fact)*(*ptr);
      (*ptr)--;
    }
    printf("Factorial is %d",fact);
  }
  
  
}
