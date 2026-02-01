#include <stdio.h>
void value(int a,int b)
{
  a++;
  b++;
  printf("\nInside function:\na = %d b = %d",a,b);
}
int main()
{
  int a = 10;
  int b = 20;
  
  printf("Before function call:\na = %d b = %d",a,b);
  value(a,b); //Call by value
  printf("\nAfter function call:\na = %d b = %d",a,b);

}
