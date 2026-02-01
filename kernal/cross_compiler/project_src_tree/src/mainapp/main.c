#include <stdio.h>
int main()
{
  int a,b;
  printf("Enter a: ");
  scanf("%d",&a);
  printf("Enter b: ");
  scanf("%d",&b);
  int ch;
  printf("Enter (1-ADD,2-SUB,3-MUL,4-DIV): ");
  scanf("%d",&ch);
  if (ch == 1)
  {
    add(a,b);
  }
  else if(ch == 2)
  {
    sub(a,b);
  }
  else if(ch == 3)
  {
    mul(a,b);
  }
  else if(ch == 4)
  {
    div(a,b);
  }
}
